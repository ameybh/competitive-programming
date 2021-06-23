// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: JUNE20B practice

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001


inline ll mulFac(ll a, ll b, ll c, ll d) {
	if (b-a != 0 && (d-c)%(b-a) == 0) return (d-c)/(b-a);
	return 1;
}

inline bool equal (ll* a, ll* b) {
	rep(i,0,3) if (a[i]!=b[i]) return false;
	return true;
}

int ans;
void solve(ll* a, ll* b, int num = 0) {
	if (num >= ans) return;
	if (equal(a,b)) {
		ans = min(ans,num);
		return;
	}
	if (num >= 2) return;
	
	set<ll> add;
	add.insert(b[0]-a[0]);
	add.insert(b[1]-a[1]);
	add.insert(b[2]-a[2]);
	
	set<ll> mult;
	rep(i,0,3) if (a[i] != 0 && b[i]%a[i] == 0) mult.insert(b[i]/a[i]);
	mult.insert(mulFac(a[0],a[1],b[0],b[1]));
	mult.insert(mulFac(a[0],a[2],b[0],b[2]));
	mult.insert(mulFac(a[2],a[1],b[2],b[1]));
	mult.insert(0);
	
	
	rep(mask,1,8) {
		vector<int> all;
		rep(j,0,3) if (mask&(1<<j)) all.pb(j);
		for(auto x:add) {
			ll aa[3];
			rep(j,0,3) aa[j] = a[j];
			for(auto e:all) aa[e]+=x;
			solve(aa, b, num+1);
		}
		for(auto x:mult) {
			ll aa[3];
			rep(j,0,3) aa[j] = a[j];
			for(auto e:all) aa[e]*=x;
			solve(aa, b, num+1);
		}
	}
	
}

void solution() {
	ll a[3], b[3];
	rep(i,0,3) cin >> a[i];
	rep(i,0,3) cin >> b[i];
	ans = 3;
	solve(a,b);
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

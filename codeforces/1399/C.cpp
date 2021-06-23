// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: *
// #pragma GCC optimize ("trapv")
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
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }

// ll modmul(ll a, ll b) {
    // return ((a%MOD) * (b%MOD)) % MOD;
// }

// ll modadd(ll a , ll b){
    // return((a%MOD)+(b%MOD)+MOD)%MOD;
// }

// ll modsub(ll a , ll b){
    // return((a%MOD) - (b%MOD) + MOD)%MOD;
// }
#define MOD 1000000007
int n;
vector<int> a;

ll getCnt  (int s) {
	ll ans = 0;
	map<int,int> mp2;
	rep(i,0,n) {
		mp2[a[i]]++;
	}
	vector< bool > taken(n, false);
	rep(i,0,n) {
		if (a[i] >= s || taken[i]) continue;
		if (mp2.find(s-a[i]) != mp2.end()) {
			int pos = -1;
			rep(j,i+1,n) {
				if (s-a[j] > 0 && a[j] == s-a[i] && !taken[j]) {
					pos = j;
					break;
				}
			}
			if (pos == -1) continue;
			taken[i] = 1;
			taken[pos] = 1;
			ans++;
			
			// cout << i << ' ' << pos << ' ' << ans << '\n';
			
			mp2[a[i]]--;
			mp2[(s-a[i])]--;
		}
	}
	// cout << ans << '\n';
	return ans;
}

void solution() {
	cin >> n;
	a.resize(n);
	for (auto& e:a) {
		cin >> e;
	}
	
	set< int > ss;
	rep(i,0,n) {
		rep(j,i+1,n) {
			ss.insert(a[i]+a[j]);
		}
	}
	ll ans = 0;
	for (auto& e:ss) {
		ans = max(ans, getCnt(e));
	}
	cout << ans << '\n';
	
		
}
	

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
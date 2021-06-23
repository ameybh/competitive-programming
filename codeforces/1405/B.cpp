// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces Round #668 (Div. 2) 

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
void solution() {
	cin >> n;
	vector<int> p,q;
	a.resize(n);
	ll ans = 0;
	rep(i,0,n) {
		cin >> a[i];
		if (a[i] > 0) {
			p.emplace_back(i);
		} else if (a[i] < 0) {
			q.emplace_back(i);
		}
	}
	
	for (int i=0; i<(int)p.size(); i++) {
		auto it = lower_bound(all(q), p[i]);
		while (it != q.end() && a[q[(it - q.begin())]] == 0 ) ++it;
		if (it == q.end()) break;
		int val = min(a[p[i]], abs(a[q[(it - q.begin())]]));
		a[p[i]] -= val;
		a[q[(it-q.begin())]] += val;
		if (a[p[i]] != 0) i--;
		// rep(j,0,n) cout << a[j] << ' ';
	// cout << '\n';
	}
	// rep(i,0,n) cout << a[i] << ' ';
	// cout << '\n';
	
	p.clear();
	q.clear();
	rep(i,0,n) {
		if (a[i] > 0) {
			p.emplace_back(i);
		} else if (a[i] < 0) {
			q.emplace_back(i);
		}
	}
	// int z = 0;
	rep(i,0,(int)q.size()) {
		// z++;
		// if (z > 10) break;
		auto it = lower_bound(all(p), q[i]);
		
		while (it != p.end() && a[p[(it-p.begin())]] == 0) ++it;
		if (it == p.end()) break;
		int val = min(a[p[(it-p.begin())]], abs(a[q[i]]));
		a[q[i]]+= val;
		a[p[it-p.begin()]] -= val;
		ans+= val;
		if (a[q[i]] != 0) i--;
		// rep(j,0,n) cout << a[j] << ' ';
		// cout << '\n';
		// cout << i << '\n';
	}
	// rep(i,0,n) cout << a[i] << ' ';
	// cout << '\n';
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
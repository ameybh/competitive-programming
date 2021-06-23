// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
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
void solve() {
	int n;
	cin >> n;
	vector< int > a(n);
	map< int, vector< int > > mp;
	rep(i,0,n) {
		cin >> a[i];
		if (mp.count(a[i])) {
			mp[a[i]].pb(i);
		} else {
			mp[a[i]] = {i};
		}
	}

	ll ans = 0;
	
	
	for (auto& e:mp) {
		ll s = e.second[0] + 1;
		// cout << e.first << ' ';
		// for (auto& f: e.second) {
			// cout << f << ' ';
		// }
		// cout << '\n';
		rep(i,1,(int)e.second.size()) {
			ans += s*(n-e.second[i]);
			s += e.second[i]+1;
		}
	}
	cout << ans << '\n';
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
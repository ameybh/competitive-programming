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
	ll n;
	cin >> n;
	vector< ll > a(n);
	for (auto& e:a) cin >> e;
	vector< vector< ll > > ans;
	
	ll p1 = 1e9 + 7, p2 = 1e9 + 9;
	bool p = false;
	
	rep(i,1,n) {
		ll m = min(a[0], a[i]), z;
		if (p) {
			z = p1;
		} else {
			z = p2;
		}
		p = !p;
		ans.pb({1, i+1, m, z});
		assert(min(a[0], a[i]) == min(m, z));
		// cout << min(a[0], a[i]) << ':' << min(m,z) << '\n';
		a[0] = m;
		a[i] = z;
	}
	
	rep(i,0,n-1) {
		assert(__gcd(a[i], a[i+1]) == 1);
		// cout << a[i] << ' ' << a[i+1] << __gcd(a[i], a[i+1]) << '\n';
	}
	assert((int)ans.size()<=n);
	cout << (int)ans.size() << '\n';
	for (auto& e:ans) {
		for (auto& f:e) cout << f << ' ';
		cout << '\n';
	}
	
}
int main() {
	// ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		// cout << t+1 << '\n';
		solve();
	}
	return 0;
}
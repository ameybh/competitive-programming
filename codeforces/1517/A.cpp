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
vector< ll > p;
void solve() {
	ll n;
	cin >> n;
	string strn = to_string(n);
	if (n % 2050 != 0 || n < 2050) {
		cout << -1 << '\n';
		return;
	}
	else {
		ll ans = n/2050;
		// cout << ans << ' ';
		ll ans2 = 0;
		repD(i,(int)p.size()-1, 0) {
			while ((ll)2050*ans >= (ll)p[i]) {
				ans -= p[i]/2050;
				ans2++;
			}
			// cout << p[i] << ' ' << ans2 << '\n';
		}
		cout << ans2 << '\n';
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll a = 2050;
	while (a < (1e18)) {
		p.pb(a);
		a *= 10;
	}
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
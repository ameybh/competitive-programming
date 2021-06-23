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
vector< int > ord;
void solve() {
	int n;
	cin >> n;
	auto it = lower_bound(all(ord), n);
	int ans = it - ord.begin() + 1;
	if (*it != n) {
		ans--;
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	rep(i,1,10) {
		char x = '0' + i;
		string z = "";
		rep(j,1,10) {
			z.pb(x);
			ord.pb(stoi(z));
		}
	}
	sort(all(ord));
	// rep(i,0,10) cout << ord[i] << ' ';
	
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
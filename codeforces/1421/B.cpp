// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 18.10.2020 14:34:15 IST
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
	vector< string > a(n);
	rep(i,0,n)  {
		cin >> a[i];
	}
	
	
	if (a[0][1] == a[1][0]) {
		if (a[n-1][n-2] == a[n-2][n-1]) {
			if (a[0][1] == a[n-1][n-2]) {
				cout << 2 << '\n';
				cout << 1 << ' ' << 2 << '\n';
				cout << 2 << ' ' << 1 << '\n';
				return;
			} else {
				cout << 0 << '\n';
				return;
			}
		} else {
			if (a[0][1] == a[n-1][n-2]) {
				cout << 1 << '\n';
				cout << n << ' ' << n-1 << '\n';
				return;
			} else {
				cout << 1 << '\n';
				cout << n-1 << ' ' << n << '\n';
				return;
			}
		}
	} else {
		if (a[n-1][n-2] == a[n-2][n-1]) {
			if (a[0][1] == a[n-1][n-2]) {
				cout << 1 << '\n';
				cout << 1 << ' ' << 2 << '\n';
				return;
			} else {
				cout << 1 << '\n';
				cout << 2 << ' ' << 1 << '\n';
				return;
			}
		} else {
			cout << 2 << '\n';
			cout << 1 << ' ' << 2 << '\n';
			a[0][1] = a[1][0];
			if (a[0][1] == a[n-1][n-2]) {
				cout << n << ' ' << n-1 << '\n';
				return;
			} else {
				cout << n - 1 << ' ' << n << '\n';
				return;
			}
		}
	}
	
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
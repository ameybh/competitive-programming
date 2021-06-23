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
	int n, x;
	cin >> n >> x;
	vector< int > a(n);
	int f = -1;
	rep(i,0,n) {
		cin >> a[i];
	}
	if (n == 1 && a[0] == x) {
		cout << "NO\n";
		return;
	}
	sort(all(a));
	reverse(all(a));
	rep(i,0,n) {
				if (a[i]== x) {
			f = i;
		}
	}
	rep(i,0,n) {
		rep(j,i+1,n) {
			if (a[i] + a[j] == x) {
				if (n <= 2) {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	ll s = 0;
	rep(i,0,n) {
		s += a[i];
		if (s == x) {
			if (i == n-1) {
				cout << "NO\n";
				return;
			} else {
				s -= a[i];
				s += a[i+1];
				swap(a[i], a[i+1]);
			}
		}
	}
	
	cout << "YES\n";
	rep(i,0,n) cout << a[i] << ' ';
	cout << '\n';
	
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
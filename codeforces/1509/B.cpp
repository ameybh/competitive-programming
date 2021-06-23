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
	string s;
	cin >> s;
	int t = 0, m = 0;
	rep(i,0,n) {
		if (s[i] == 'M') {
			++m;
			if (t < m) {
				cout << "NO\n";
				return;
			}
		} else {
			t++;
		}
	}
	t = 0;
	m = 0;
	repD(i,n-1,0) {
		if (s[i] == 'M') {
			++m;
			if (t < m) {
				cout << "NO\n";
				return;
			}
		} else {
			++t;
		}
	}
	// cout << m << ' ' << t << '\n';
	cout << (m*2 == t ? "YES" : "NO") << '\n';
	// vector< int > posT, posM;
	// rep(i,0,n) {
		// if (s[i] == 'T') posT.pb(i);
		// else posM.pb(i);
	// }	
	// vector< bool > taken((int)posT.size(), false);
	// rep(i,0,(int)posM.size()) {
		// int pos = posM[i];
		
	// }
	
	
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
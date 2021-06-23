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
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	rep(z,0,m) {
		string b = s;
		rep(i,0,n) {
			if (s[i] == '0') {
				int cnt = 0;
				if (i > 0) cnt += s[i-1] == '1';
				if (i+1 <n) cnt += s[i+1] == '1';
				if (cnt == 1) {
					b[i] = '1';
				}
			}
		}
		// cout << b << '\n';
		if (b == s) break;
		s = b;
	}
	cout << s << '\n';
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
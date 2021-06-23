// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
// Contest/Platform: Codeforces Raif Round 1 (Div. 1 + Div. 2) 
// Date: 17.10.2020 18:30:05 IST
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
	s+=s;
	s+=s;
	bool cl = 1, acl = 1;
	
	for (int i=0; i<n; i++) {
		cl &= (s[i] == '>' || s[i] == '-');
		acl &= (s[i] == '<' || s[i] == '-');
	}
	if (cl || acl) {
		cout << n << '\n';
		return;
	}
	ll ans = 0;
	for (int i=n; i<2*n; i++) {
		// cout << s[i] << ' ';
		if (s[i] == '-' || s[i+1] == '-') {
			++ans;
			continue;
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
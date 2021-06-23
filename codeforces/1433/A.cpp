// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 20.10.2020 19:57:54 IST
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
void solve() {
	int x;
	cin >> x;
	int d = 1;
	ll ans = 0;
	int s = 0;
	while (d <= 9) {
		s *= 10;
		s += d;
		string p = to_string(s);
		ans += p.size();
		// cout << s << '\n';
		if (s == x) break;
		if (s*10 + d > 10000) {
			++d;
			s = 0;
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
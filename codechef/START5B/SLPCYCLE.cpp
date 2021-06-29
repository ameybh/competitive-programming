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
void solve() {
	int l, h;
	cin >> l >> h;
	string s;
	cin >> s;
	vector< int > c;
	int curr = s[0] == '0';
	rep(i,1,l) {
		if (s[i] == '0') {
			curr++;
		} else if (curr > 0) {
			c.pb(curr);
			curr = 0;
		}
	}
	if (curr > 0) c.pb(curr);
	rep(i,0,(int)c.size()) {
		if (c[i] > h/2) {
			h -= c[i];
			h *= 2;
		}
		if (h <= 0) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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

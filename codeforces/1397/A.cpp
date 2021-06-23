#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
//vector< string > a(n);
void solve() {
	cin >> n;
	map< char,int > mp1;
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		for (auto& e:s) {
			mp1[e]++;
		}
	}
	bool y = 1;
	for (auto& e:mp1) {
		y &= e.second % n == 0;
	}
	cout << (y ? "YES" : "NO") << '\n';
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
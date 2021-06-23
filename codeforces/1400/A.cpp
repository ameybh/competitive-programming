#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	
	
	for (int i=0; i<=n-1; i++) {
		string p = s.substr(i,n);
		ans += p[i];
	}
	cout << ans << '\n';
	
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();	
	
	return 0;
}
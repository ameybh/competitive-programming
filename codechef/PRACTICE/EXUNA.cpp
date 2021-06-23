#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
	int n; cin >> n;
	int ans = 1e9;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		ans = min(x, ans);
	}
	cout << ans << '\n';
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

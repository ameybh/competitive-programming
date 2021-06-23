#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
	int n; cin >> n;
	if (n%2 == 0) {
		cout << "NO\n";
		return;
	}
	vector< vector< bool > > g(n, vector< bool > (n, 0));
	int cnt = (n-1)/2;
	cout << "YES\n";
	for (int i=0; i<n; i++) {
		for (int j=0; j<cnt; j++) {
			g[i][(i+j+1)%n] = 1;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			cout << g[i][j];
		cout << '\n';
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

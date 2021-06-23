#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;
vector<string> a;
void solve() {
	cin >> n >> m;
	a.resize(n);
	for (auto& e:a) cin >> e;
	
	int ans = 0;
	
	
	for (int i=0; i<m; i++) {
		if (a[n-1][i] == 'C') continue;
		if (a[n-1][i] == 'D') ans++;
	}
	
	for (int i=0; i<n; i++) {
		if (a[i][m-1] == 'C') continue;
		if (a[i][m-1] == 'R') ans++;
	}
	
	
	cout << ans << '\n';
	
}

int main() {
	
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
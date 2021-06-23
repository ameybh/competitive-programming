#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector< int > a(n),b(n);
	for (auto& e:a)cin >> e;
	for (auto& e:b)cin >> e;
	int amin = *min_element(a.begin(),a.end());
	int bmin = *min_element(b.begin(),b.end());
	ll moves = 0;
	for (int i=0; i<n; i++) {
		moves += max(a[i]-amin, b[i]-bmin);
	}
	cout << moves << '\n';
	
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
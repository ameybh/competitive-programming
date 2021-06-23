#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
vector< int > a;
void solve() {
	cin >> n;
	a.resize(n);
	int mx = n, mi = 1;
	for (int i=0; i<n; i++) {
		if (i % 2 == 0) {
			a[i] = mx;
			mx--;
		} else {
			a[i] = mi;
			mi++;
		}
	}
	for (auto& e:a) cout << e << ' ';
	cout << '\n';
	
	// for (int i=0; i<n; i++) {
		// for (i
	// }
	
}

int main() {
	
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
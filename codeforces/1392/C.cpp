#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector< int > a(n);
		for (auto& e:a) cin >> e;
		ll moves = 0;
		for (int i=0; i+1<n; i++) {
			moves += max(0LL, (ll) (a[i] -a[i+1]));
		}
		cout << moves << '\n';
	}
	return 0;
}
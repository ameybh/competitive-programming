#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
void solve() {
	int n;
	cin >> n;
	set < int > a;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		if (x > 0)
			a.insert(x);
	}
	cout << (int) a.size() << '\n';
}

int main() {
	cin >> t;
	while (t--) solve();
	return 0;
}

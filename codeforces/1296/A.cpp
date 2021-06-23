#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n;
	cin >> n;
	vector< int > a(n);
	int o = 0, ev = 0;
	for (auto& e:a) {
		cin >> e;
		if (e&1) o++;
		else ev++;
	}
	
	if (ev == n) cout << "NO\n";
	else {
		if (o == n && n%2 == 0) cout << "NO\n";
		else cout << "YES\n";
	}
	
}

int main() {
	
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
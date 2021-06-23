// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany 1.36 on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
void solve() {
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << (b < d ? "up" : "down") << '\n';
		return;
	}
	
	if (b == d) {
		cout << (a < c ? "right" : "left") << '\n';
		return;
	}
	
	cout << "sad\n";
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

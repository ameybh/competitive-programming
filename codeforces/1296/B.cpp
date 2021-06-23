#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n, ans = 0;
	cin >> n;
	while (n >= 10) {
		int p = log10(n);
		int v = pow(10,p);
		n -= v;
		ans += v;
		n += pow(10,p-1);
	}
	ans += n;
	cout << ans << '\n';	
}

int main() {
	
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
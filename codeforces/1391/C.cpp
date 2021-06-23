#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
const int MOD = 1e9 + 7;
void solve() {
	cin >> n;
	ll f = 1, p2 = 1;
	for (int i=2;i<=n; i++) {
		f = (i*f)%MOD;
		p2 = (2*p2)%MOD;
	}
	
	cout << ((f%MOD - p2%MOD)+MOD)%MOD << '\n';
	
}

int main() {
	
solve();
	return 0;
}
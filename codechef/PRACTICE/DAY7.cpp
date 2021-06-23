#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int divs(int x) {
	return x/7;
}

int t;
int main() {
	cin >> t;
	while (t--) {
		int l,r;
		cin >> l >> r;
		int dl = divs(l);
		int dr = divs(r);
		
		if (l % 7 == 0) {
			dr++;
		}
		// if (r == l) {
			// if (r % 7 == 0) {
				// cout << 1 << '\n';
			// }
		// }
		double p = ((double)dr-dl)/(r-l+1);
		cout << fixed << setprecision(8) << p << '\n';
	}
	return 0;
}

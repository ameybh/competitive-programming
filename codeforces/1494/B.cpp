// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
void solve() {
	int n, u, r, d, l;
	cin >> n >> u >> r >> d >> l;
	int tr = r, tl = l;
	
	if (u == n-1) {
		if (r > l) {
			r -= 1;
		} else {
			l -= 1;
		}
	} else if (u == n) {
		r -= 1;
		l -= 1;
	}
	
	if (d == n-1) {
		if (r > l) {
			r -= 1;
		} else {
			l -= 1;
		}
	} else if (d == n) {
		r -= 1;
		l -= 1;
	}
	
	if (r < 0 || l < 0) {
		cout << "NO\n";
		return;
	}
	
	r = tr;
	l = tl;
	if (r == n-1) {
		if (u > d) {
			u -= 1;
		} else {
			d -= 1;
		}
	} else if (r == n) {
		u -= 1;
		d -= 1;
	}
	if (l == n-1) {
		if (u > d) {
			u -= 1;
		} else {
			d -= 1;
		}
	} else if (l == n) {
		u -= 1;
		d -= 1;
	}
	
	
	
	if (u < 0 || d < 0) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	return;
	
	
	
	// if (u >= n-2) {
		// if (r == 0 && l == 0) {
			// cout << "NO\n";
			// return;
		// } else if (u == n && (r == 0 || l == 0)) {
			// cout << "NO\n";
			// return;
		// }
	// }
	
	// if (d >= n-2) {
		// if (r == 0 && l == 0) {
			// cout << "NO\n";
			// return;
		// } else if (d == n && (r == 0 || l == 0)) {
			// cout << "NO\n";
			// return;
		// }
	// }
	
	// if (r >= n-2) {
		// if (u == 0 && d == 0) {
			// cout << "NO\n";
			// return;
		// } else if (r == n && (u == 0 || d == 0)) {
			// cout << "NO\n";
			// return;
		// }
	// }
	
	// if (l >= n-2) {
		// if (u == 0 && d == 0) {
			// cout << "NO\n";
			// return;
		// } else if (l == n && (u == 0 || d == 0)) {
			// cout << "NO\n";
			// return;
		// }
	// }
	
	
	// if (n == 2) {
		// n++;
	// }
	// if (u+2 > n) {
		// if (r == 0 || l == 0) {
			// cout << "NO\n";
			// return;
		// }
	// }
	// if (d+2 > n) {
		// if (r == 0 || l == 0) {
			// cout << "NO\n";
			// return;
		// }
	// }
	// if (r+2 > n) {
		// if (u == 0 || d == 0) {
			// cout << "NO\n";
			// return;
		// }
	// }
	// if (l+2 > n) {
		// if (u == 0 || d == 0) {
			// cout << "NO\n";
			// return;
		// }
	// }
	cout << "YES\n";
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
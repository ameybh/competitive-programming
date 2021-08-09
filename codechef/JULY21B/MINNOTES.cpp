// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
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
	int n;
	cin >> n;
	vector< int > a(n), p(n), s(n);
	for (auto& e:a) cin >> e;
	sort(all(a), greater<int>());
	p = a;
	s = a;
	rep(i,1,n) {
		p[i] = __gcd(p[i], p[i-1]);
	}
	repD(i,n-2,0) {
		s[i] = __gcd(s[i], s[i+1]);
	}
	int maxGcd = 1, pos = 0;
	rep(i,0,n) {
		if (i == 0 && i+1<n) {
			maxGcd = max(maxGcd, s[1]);
		} else if (i == n-1 && i-1 >= 0) {
			if (p[i-1] > maxGcd) {
				maxGcd = p[i-1];
				pos = i;
			}
		} else {
			int g = __gcd(p[i-1], s[i+1]);
			if (g > maxGcd) {
				maxGcd = g;
				pos = i;
			}
		}
	}
	// cout << maxGcd << ' ' << pos << '\n';
	ll ans = 0;
	rep(i,0,n) {
		if (i == pos) a[i] = maxGcd;
		assert(a[i] % maxGcd == 0);
		// cout << a[i] << ' ';
		ans += a[i] / maxGcd;
	}
	cout << ans << '\n';
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

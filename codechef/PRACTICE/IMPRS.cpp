#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Point {
	ll x,y;
	ll dist2 () {
		return x*x + y*y;
	}
};

bool compare(Point a, Point b) {
	if (a.dist2() == b.dist2()) {
		return (a.x+a.y) < (b.x+b.y);
	}
	return a.dist2() < b.dist2();
}
int t;
int main() {
	cin >> t;
	while (t--) {
		ll n,k;
		cin >> n >> k;
		vector< Point > p(n);
		for (int i=0; i<n; i++) {
			cin >> p[i].x >> p[i].y;
		}
		sort(p.begin(), p.end(), compare);
		ll ans = 0;
		for (int i=0; i<k; i++) {
			ans += (p[i].x+p[i].y);
		}
		cout << ans << '\n';
	}
	return 0;
}

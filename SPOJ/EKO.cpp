#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector< ll > a;
ll n,m;
bool f (ll h) {
	ll w = 0;
	for (auto& e:a) {
		w += max(0LL, e-h);
	}
	return w >= m;
}
int main() {
	cin >> n >> m;
	a.resize(n);
	for (auto& e:a) cin >> e;
	ll low = 0, high = *max_element(a.begin(), a.end()), ans = 0;
	while (low <= high) {
		ll mid = (high-low)/2 + low;
		if (f(mid)) {
			ans = max(ans, mid);
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << ans << '\n';
	return 0;
}

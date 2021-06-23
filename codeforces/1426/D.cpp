#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll n, ans = 0;
	cin >> n;
	vector< ll > pref(n+1);
	pref[0] = 0;
	set< ll > vals = {0};
	for (int i=1; i<=n; i++) {
		ll p;
		cin >> p;
		pref[i] = pref[i-1] + p;
		if (vals.count(pref[i])) { 
			++ans;
			vals = set< ll > ({pref[i] - p});
		} 
		vals.insert(pref[i]);
	}
	// for (auto& e:pref) cout << e << ' ';
	// cout << '\n';
	cout << ans << '\n';
	return 0;
}
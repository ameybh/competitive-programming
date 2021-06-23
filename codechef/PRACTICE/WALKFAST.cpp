// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany 1.36 on Ubuntu 20.04
#pragma GCC optimize ("trapv")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
void solve() {
	
	int n, a, b, c, d, p, q, y;
	cin >> n >> a >> b >> c >> d >> p >> q >> y;
	
	vector< int > z(n);
	for (auto& e:z) cin >> e;
	--a;--b;--c;--d;
	int directTime = abs(z[a] - z[b])*p;
	assert(directTime > 0);
	if (abs(z[a]-z[c])*p > y) {
		cout << directTime << '\n';
		return;
	}
	
	int trainTime = abs(z[a]-z[c])*p + max(0,y-abs(z[a]-z[c])*p) + abs(z[c]-z[d])*q + abs(z[d]-z[b])*p;
	assert(trainTime > 0);
	
	cout << min(trainTime, directTime) << '\n';
	
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

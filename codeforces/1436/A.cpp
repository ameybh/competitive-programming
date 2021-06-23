// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany 1.36 on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 25.10.2020 10:55:47 IST
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector< int > a(n);
		for (auto& e:a) cin >> e;
		if (accumulate(a.begin(), a.end(), 0LL) == (ll)k) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0; 
}
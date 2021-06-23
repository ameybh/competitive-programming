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
		int n;
		cin >> n;
		vector<int> a(n); for(auto& e:a) cin >> e;
		for (int i=0; i<n; i+=2) {
			cout << -1*a[i+1] << ' ' << a[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
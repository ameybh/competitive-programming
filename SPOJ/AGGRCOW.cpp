#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n,cows;
vector< int > a;
int pos (int x) {
	int placed = 1, lastpos = a[0];
	for (int i=1; i<n; i++) {
		if (a[i] - lastpos >= x) {
			if (++placed == cows) return 1;
			lastpos = a[i];
		}
	}
	return 0;
}
void sol() {
	cin >> n >> cows;
	a.resize(n);
	for (auto& e:a)
		cin >> e;
	sort(a.begin(),a.end());
	int start = 0, end = a[n-1]-a[0]+1, mid;
	while (end - start > 1) {
		mid = (end+start) >> 1;
		if (pos(mid)) {
			start = mid;
		} else {
			end = mid;
		}
	}
	cout << start << "\n";
}
int main() {
	int t;
	cin >> t;
	while (t--)
		sol();
	return 0;
}

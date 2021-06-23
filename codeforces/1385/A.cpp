#include <bits/stdc++.h>
using namespace std;

#define ll long long
void sol() {
	vector<int> a(3);
	for (auto& it:a) cin >> it;
	sort(a.begin(),a.end());
	if (a[1] != a[2]) {
		cout << "NO\n";
	} else {
		cout << "YES\n" << a[0] << " " << a[0] << " " << a[2] << "\n";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--)
		sol();
	return 0;
}
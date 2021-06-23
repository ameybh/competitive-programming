#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
void solve() {
	int n;
	cin >> n;
	vector< vector< int > > m(n, vector< int > (n));
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> m[i][j];
		}
	}
	
	
	vector< bool > toprow(n, true);
	for (int i=0; i<n; i++) {
		if (m[0][i] != i+1) toprow[i] = false;
	}
	
	// for (int i=0; i<n; i++) cout << toprow[i] << ' ';
	// cout << '\n';
	
	int check = 1, ans = 0;
	for (int i=n-1; i>0; i--) {
		if (check != toprow[i]) {
			ans++;
			check = 1-check;
		}
	}	
	
	cout << ans << '\n';
	
}

int main() {
	cin >> t;
	while (t--) solve();
	return 0;
}

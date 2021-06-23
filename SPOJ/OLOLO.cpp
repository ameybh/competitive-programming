#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	int n, x, ans = 0;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> x;
		ans ^= x;
	}
	cout << ans << '\n';
}    

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		vector< int > col(100,0);
		vector< int > l(n);
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			l[i] = x;
			col[--x]++;
		}
		int fans = 1e9;
		for (int j=0; j<100; j++) {
			int ans = 0;
			for (int i=0; i<n; i++) {
				if (l[i] != j+1) {
					// cout << l[i] << ' ';
					++ans;
					i += k-1;	
				}
			}
			fans = min(fans, ans);
		}
		cout << fans << '\n';
	}
	return 0;
}
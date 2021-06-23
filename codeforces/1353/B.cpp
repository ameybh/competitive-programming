#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mxN 50

int t,n,k,a[mxN],b[mxN];
int main() {
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		for (int i=0; i<n; i++) {
			cin >> b[i];
		}
		
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		
		int it = 0;
		while (k--) {
			if (a[it] < b[it]) {
				int tmp = a[it];
				a[it] = b[it];
				b[it] = tmp;
				it++;
			}
			else {
				break;
			}
		}
		
		int sum = accumulate(a,a+n,0);
		
		cout << sum << "\n";
		
	}
}
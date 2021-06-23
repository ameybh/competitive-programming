#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int data[n];
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			data[i] = x;
		}
		bool ok = true;
		for(int j=0; j<n; j++) {
			for(int k=j; k<n; k++) {
				ok&= abs(data[j]-data[k]) != 1;
			}
		}
		
		ok ? cout << 1 << "\n" : cout << 2 << "\n";
	}
	return 0;
}
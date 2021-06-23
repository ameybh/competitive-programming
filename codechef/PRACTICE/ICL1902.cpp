#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	vector<int> sq;
	for (int i=1; i<=floor(sqrt(1000)); i++) {
		sq.push_back(i*i);
	}
	
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt = 0;
		while (n>0) {
			int pos = lower_bound(sq.begin(),sq.end(), n) - sq.begin();
			if (pos >= 0) {
				if (sq[pos] == n) {
					cnt++;
					n=0;
					break;
				}
				if (pos > 0) {
					n-=sq[pos-1];
					cnt++;
				}
			}
			else
				break;
		}
		cout << cnt << "\n";
		
	}
	return 0;
}


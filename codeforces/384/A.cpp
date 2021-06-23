#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n,cnt=0;
	cin >> n;
	vector< vector< int > > a(n, vector< int > (n,-1));
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (a[i][j] == 0) continue;
			a[i][j] = 1;
			cnt++;
			if (i+1<n) {
				a[i+1][j] = 0;
			}
			if (i-1>=0) {
				a[i-1][j] = 0;
			}
			if (j-1>=0) {
				a[i][j-1] = 0;
			}
			if (j+1<n) {
				a[i][j+1] = 0;
			}
		}
	}
	cout << cnt << '\n';
	for(auto& e:a) {
		for (auto& f:e) {
			if (f==1) {
				cout << 'C';
			} else  {
				cout << '.';
			}
		}
		cout << '\n';
		
	}
	
	return 0;
}
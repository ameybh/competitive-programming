// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: SPOJ

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n,m;
	
	cin >> n;
	int s[n];
	for (int i=0; i<n; i++) {
		cin >> s[i];
	}
	
	cin >> m;
	int q[m];
	for (int i=0; i<m; i++) {
		cin >> q[i];
	}
	
	
	for (int i=0; i<min(n,m); i++) {
		if (s[i] == q[i])
			cout << i+1 << " ";
	}
	cout << "\n";
	
	
	
	return 0;
}

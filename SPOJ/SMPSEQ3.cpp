// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: SPOJ

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n,m,x;
	
	map <int, int> s,q;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> x;
		s[x]++;
	}
	
	cin >> m;
	for (int i=0; i<m; i++) {
		cin >> x;
		q[x]++;
	}
	
	
	
	for (auto i = s.begin(); i != s.end(); i++) {
		if (q[i->first] == 0) {
			cout << i->first << " ";
		}
	}
	
	
	
	
	
	
	return 0;
}

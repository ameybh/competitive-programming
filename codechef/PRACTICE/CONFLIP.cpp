// conflip.cpp
#include <bits/stdc++.h>


#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int g;
		cin >> g;
		while(g--) {
			int i,n,q;
			cin >> i >> n >> q;
			int ans;
			if(i==1) {
				if(q==1) {
					ans = floor(n/2);
				}
				else {
					ans = n-floor(n/2);
				}
			}
			else {
				if(q==1) {
					ans = n-floor(n/2);
				}
				else {
					ans = floor(n/2);
				}
			}
			cout << ans << "\n";
		}

	}
	return 0;
}	
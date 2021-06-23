#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n[3];
	    for(int i=0;i<3;i++) {
	        int x;
	        cin >> x;
	        n[i] = x;
	    }
	    sort(n,n+3);
	    cout << n[1] << "\n";
	}
	return 0;
}

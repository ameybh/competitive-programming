#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	
	int t,n,k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    ll s = 0;
	    for (int i=0; i<n; i++) {
	        int x;
	        cin >> x;
	        s += (ll) x;
	    }
	    cout << s % k << "\n";
	    
	}
	
	
	return 0;
}

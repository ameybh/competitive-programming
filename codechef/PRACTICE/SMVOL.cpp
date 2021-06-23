#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	
	ll t;
	cin >> t;
	while (t--) {
	    ll n;
	    cin >> n;
	    if (n == 1) {
	        cout << 1 << "\n";
	        continue;
	    }
	    
	    ll ans =  2*(4 + 3*n*(n-2));
	    cout << ans << "\n";
	    
	}
	
	return 0;
}

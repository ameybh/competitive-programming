#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	
	ll t,a,b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    ll g = __gcd(a,b);
	    ll l = (a*b)/g;
	    cout << g << " " << l << "\n";
	}
	
	return 0;
}

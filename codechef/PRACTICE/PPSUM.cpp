#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll sum(ll n) {
    return (n*(n+1))/2;
}

int main() {
	// your code goes here
	
	ll t,n,d;
	cin >>t;
	while (t--) {
	    cin >> d >> n;
	    ll ans = n;
	    for (int i=0; i<d; i++) {
	        ans = sum(ans);
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}

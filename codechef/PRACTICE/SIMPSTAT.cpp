#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	
	ll t,n,k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    ll a[n];
	    for (ll i=0; i<n; i++) {
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    double s = 0;
	    for (ll i=k; i<n-k;i++) {
	        s += (double)a[i];
	    }
	    double avg = (double) s / (n-2*k);
	    cout << fixed << setprecision(6) <<  avg << "\n";
	}
	
	return 0;
}

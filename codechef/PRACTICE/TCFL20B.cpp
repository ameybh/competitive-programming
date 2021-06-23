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
	    vector< pair<int,string> > drivers;
	    for (ll i=0; i<n; i++) {
	        string name;
	        cin >> name;
	        ll x;
	        cin >> x;
	        drivers.push_back(make_pair(x,name));
	    }
	    
	    sort(drivers.begin(), drivers.end());
	    for (ll i=0; i<n; i++) {
	        cout << drivers[i].second << "\n";
	    }
	    
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int getCount(int dig) {
	switch (dig) {
		case 0:
		case 1: return 1; break;
		case 7:
		case 9: return 4; break;
		default: return 3;
	}
}

int main() {
	// your code goes here
	
	ll t;
	cin >> t;
	while (t--) {
		string n;
		cin >> n;
		ll nS = (ll) n.size();
		ll pos = 1;
		for (ll i=0; i<nS; i++) {
			pos*=getCount( ( int(n[i]-48) ) );
			pos = pos%MOD;
		}
		if(pos>1) 
			cout << pos%MOD << "\n";
		else 
			cout << 0 << "\n";
	}
	
	return 0;
}

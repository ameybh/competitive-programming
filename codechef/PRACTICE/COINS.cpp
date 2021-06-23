#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maxCoins(ll x, ll *a) {
	
	if(x<12) {
		a[x] = x;
		return x;
	}
	if(a[x] != 0) {
		return a[x];
	}
	a[x] = max(x, maxCoins(x/2,a) + maxCoins(x/3,a) + maxCoins(x/4,a));
	return a[x];
	
}

int main() {
	ll x;
	ll *a;
	while (cin >> x) {
		
		a = (ll*)malloc((x+1)*sizeof(ll));
		cout << maxCoins(x,a) << "\n";
		
	}
	return 0;
}

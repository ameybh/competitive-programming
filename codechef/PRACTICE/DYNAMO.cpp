#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sol() {
	ll n;
	cin >> n;
	ll a;
	
	cin >> a;
	ll mx = pow(10,n);
	cout << a + 2*mx << endl;
	
	cin >> a;
	cout << mx - a << endl;
	
	cin >> a;
	cout << mx - a << endl;
	
	cin >> a;
	assert(a == 1);
	
}
int main() {
	int t;
	cin >> t;
	while (t--)
		sol();
	return 0;
}

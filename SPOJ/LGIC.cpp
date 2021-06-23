#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


vector< ll > f(21);

int main() {
	ll n;
	cin >> n;
	f[0] = 1;
	for (int i=1; i<=20; i++) {
		f[i] = i*f[i-1];
	}
	
	ll ans = (f[n] + ((1LL<<n) - n));
	cout << ans << '\n';
}    

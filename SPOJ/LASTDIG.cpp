#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 10
ll t,n,a,b;
ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		cin >> a >> b;
		cout << fe(a,b) << "\n";
	}
	return 0;
}

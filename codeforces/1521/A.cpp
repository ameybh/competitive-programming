// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma GCC optimize ("trapv")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }
ll lcm( ll a, ll b) {
	return (a/__gcd(a,b))*b;
}

void solve() {
	ll a, b;
	cin >> a >> b;
	
	
	
	ll x = lcm(a, a*b);
	ll y = x+a;
	ll z = x+y;
	
	if ((x+y != z) || (!(x % a == 0 && x % (a*b) == 0)) || (y % (a*b) == 0) || (z % (a*b) == 0) || x == 0 || y == 0 || z == 0 || (x == y) || (x == z) || (y == z)) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	
	assert(x+y == z);
	assert(x % a == 0 && x % a*b == 0);
	assert(y % (a*b) != 0);
	assert(z % (a*b) != 0);
	assert(x != y && y != z && x != z);
	assert(x > 0);
	assert(y > 0);
	assert(z > 0);
	
	cout << x << ' ' << y << ' ' << z << '\n';
	
	// ll x = a;
	// ll y = a*(b-1);
	// ll z = a*b;
	// if (y == 0 || x == y || y % b == 0) {
		// y = a*(2*b-1);
		// z = 2*a*b;
	// }
	
	// cout << x << ' ' << y << ' ' << z << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
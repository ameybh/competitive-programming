// Author: Amey Bhavsar (ameybhavsar24@github)
// IDE: Geany/Ubuntu
// Contest/Platform: -
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
int n;
const int lim = 1e6 + 5;
vector< bool > primes(lim+5, true);
vector< int > ans(lim+6, 0);
void sieve() {
	for (int i=2; i*i<=lim; i++) {
		if (primes[i]) {
			for (int j=i*i; j<=lim; j+=i) {
				primes[j] = false;
			}
		}
	}
	primes[1] = 1;
	for (int i=1; i<lim; i++) {
		ans[i] = ans[i-1];
		if (primes[i]) {
			ans[i]++;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	sieve();
	// rep(i,0,100) {
		// if (primes[i]) {
			// cout << i << ' ';
		// }
	// }
	// cout << '\n';
	// rep(i,0,10) {
		// if (primes[i]) {
			// cout << ans[i] << ' ';
		// }
	// }
	// cout << '\n';
	cin >> n;
	rep(i,0,n) {
		int p; cin >> p;
		cout << ans[(int)(ceil(sqrt(p)))] << '\n';
	}
	return 0;
}
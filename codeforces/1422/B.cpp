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
int n,m;
vector< vector< int > > a;
void solution() {
	cin >> n >> m;
	a.assign(n, vector< int > (m));
	for (auto& e: a) {
		for (auto& f:e) cin >> f;
	}
	ll ans = 0;
	rep(i,0,n) {
		rep(j,0,m) {
			int v = a[i][j];
			int q = a[n-1-i][j];
			int p = a[i][m-1-j];
			vector< int > kk = {v,q,p};
			sort(all(kk));
			ans += abs(a[i][j] - kk[1]);
			ans += abs(a[n-1-i][j] - kk[1]);
			ans += abs(a[i][m-1-j] - kk[1]);
			a[i][j] = kk[1];
			a[n-1-i][j] = kk[1];
			a[i][m-1-j] = kk[1];
			// int ss = 0, qq = 0;
			// int s = (v+q+p)/3;
			// int z = (v+q+p+2)/3;
			// for (auto& e:kk) {
				// ss += s-e;
				// qq += z-e;
			// }
			
			// if (ss < qq) {
				// ans += abs(s-a[i][j]);
				// ans += abs(s-a[n-1-i][j]);
				// ans += abs(s-a[i][m-1-j]);
				// a[i][j] = s;
				// a[n-1-i][j] = s;
				// a[i][m-1-j] = s;
			// } else {
				// ans += abs(z-a[i][j]);
				// ans += abs(z-a[n-1-i][j]);
				// ans += abs(z-a[i][m-1-j]);
				// a[i][j] = z;
				// a[n-1-i][j] = z;
				// a[i][m-1-j] = z;
			// }
		}
	}
	// for (auto& e:a) {
		// for (auto& f:e) cout << f << ' ';
		// cout << '\n';
	// }
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) solution();
	return 0;
}
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
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector < pair< int,  bool > > v1;
	cin >> n;
	rep(i,0,n) {
		int b,d;
		cin >> b >> d;
		v1.pb({b,1});
		v1.pb({d,0});
	}
	sort(all(v1));
	int ans = 0, curr = 0, mxYear = -1;
	for (auto& [u,v]:v1) {
		if (v) {
			curr++;
		} else {
			curr--;
		}
		if (curr > ans) {
			ans = curr;
			mxYear = u;
		}
	}
	cout << mxYear << ' ' << ans << '\n';
	return 0;
}
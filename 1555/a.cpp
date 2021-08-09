// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
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
void solve() {
	ll n;
  cin >> n;
  ll ans = 0;
  
  vector< ll > pz = {10,8,6};
  vector< ll > tm = {25, 20, 15};
  
  vector< ll > r;
  rep(i,0,3) {
    r.pb(n % pz[i]);
  }
  
  ll ans10 = (n/10)*tm[0];
  ll ans8 = (n/8)*tm[1];
  ll ans6 = (n/6)*tm[2];
  
  if (r[0] > 8) {
    ans10 += tm[0];
  } else if (r[0] > 6) {
    ans10 += tm[1];
  } else if (r[0] != 0) {
    ans10 += tm[2];
  }
  if (r[1] > 8) {
    ans8 += tm[0];
  } else if (r[1] > 6) {
    ans8 += tm[1];
  } else if (r[1] != 0) {
    ans6 += tm[2];
  }
  if (r[2] > 8) {
    ans6 += tm[0];
  } else if (r[2] > 6) {
    ans6 += tm[1];
  } else if (r[2] != 0) {
    ans6 += tm[2];
  }
  
  
  if (ans10 > 0) {
    ans = min(ans, ans10);
  }
  if (ans8 > 0) {
    ans = min(ans, ans8);
  }
  if (ans6 > 0) {
    ans = min(ans, ans6);  }
  
  
  // ans = min({max((ll)1e9,ans10), max((ll)1e9,ans8), max((ll)1e9,ans6)});
  cout << ans << '\n';
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

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
	int n, k;
  cin >> n >> k;
  vector< int > a(n);
  for(auto& e:a) cin >> e;
  vector< pair<ll,int> >b(n);
  rep(i,0,n) {
    b[i].ff = a[i];
    b[i].ss = i+1;
  }
  ll ans = LLONG_MIN;
  sort(all(b));
  rep(i,0,n-1) {
    ll v = b[i].ss*b[i+1].ss - k*(b[i].ff|b[i+1].ff);
    // cout << v << ' ' << a[i].ff << ' ' << a[i+1].ff << '\n';
    ans = max(ans, v);
  }
  cout << ans << '\n';
  int ans2 = -2e9, maxI = -1, maxJ = -1;
  rep(i,0,n-1) {
    rep(j,i+1,n) {
      int d =(i+1)*(j+1) - k*(a[i]|a[j]);
      if (d >= ans2) {
        ans2 = d;
        maxI = i;
        maxJ = j;
      }
    }
  }
  // cout << ans << ' ' << maxi << ' ' << maxj << '\n';
  cout << ans2 << ' ' << maxI << ' ' << maxJ << '\n';
  cout << '\n';
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

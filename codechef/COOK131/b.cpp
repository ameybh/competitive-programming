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
  int n;
  cin >> n;
  vector< int > a(n);
  for (auto& e:a) cin >> e;
  // ll r = 0;
  // bool f = 0;
  vector< int > bit(32);
  rep(i,0,n) {
    int x = a[i];
    int b = 0;
    while (x) {
      if (x&1) bit[b]++;
      x >>= 1;
      b++;
    }
  }
  vector< int > pos;
  ll x = 0, minVal = 2e9;
  ll x2 = 0;
  for (int i=0; i<32; i++) {
    // if (bit[i]) pos.pb(i);
    if (bit[i]) {
      x2 |= (1<<i);
    }
  }
  ll minVal2 = 0;
  vector< int > b = a;
  rep(i,0,n) {
    b[i] ^= x2;
    minVal2 |= b[i];
  }
  // for (int i=0; i<(1<<(int)pos.size()); i++) {
    // for (int j=0; j<(int)pos.size(); j++) {
      // vector< int > px;
      // if (i&(1<<j)) {
        // px.pb(pos[j]);
      // }
      // ll nx = 0;
      // for (auto& e:px) {
        // nx += (1<<e);
      // }
      // ll val = 0;
      // vector< int > b =a;
      // rep(k,0,n) {
        // b[k] ^= nx;
        // val |= b[k];
      // }
      // if (val < minVal) {
        // minVal = val;
        // x = nx;
      // }
    // }
  // }
  if (x == 0) {
    x = 1;
    ll val = 0;
    rep(i,0,n) {
      a[i] ^= x;
      val |= a[i];
    }
    minVal = val;
  }
  if (minVal < minVal2)
    cout << x << ' ' << minVal << '\n';
  else
    cout << x2 << ' ' << minVal2 << '\n';
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

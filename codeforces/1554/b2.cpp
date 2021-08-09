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
void solve() {
	ll n, k;
  cin >> n >> k;
  vector< pair<int,int> > pos(n+10, make_pair(-1,-1));
  vector< ll > a(n);
  rep(i,0,n) {
    int x;
    cin >> x;
    a[i] = x;
    int mx = pos[x].ff;
    if (mx == -1) {
      pos[x].ff = i+1;
    } else {
      pos[x].ss = pos[x].ff;
      pos[x].ff = i+1;
    }
  }
  ll ans = INT_MIN;
  rep(i,0,n-1) {
    if (a[i] == a[i+1]) {
      ans = max(ans, (ll)pos[a[i]].ff * (ll)pos[a[i]].ss - k*a[i]);
    } else {
      
      ll d = (ll)pos[a[i]].ff*(ll)pos[a[i+1]].ff - k*(a[i]|a[i+1]);
      ans = max(ans, d);
    }
  }
  
  int zpos = -1;
  rep(i,0,n) {
    if (a[i] == 0) zpos = i+1;
  }
  if (zpos > -1) {
    rep(i,0,n) {
      if (i+1 == zpos) continue;
      ans = max(ans, (ll)zpos*(i+1) - (ll)k*a[i]);
    }
  }
  
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

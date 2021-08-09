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
  int smv = INT_MAX;
  int mv = INT_MAX;
  map<int,int> mp;
  for (auto& e:a) {
    cin >> e;
    mp[e]++;
    mv = min(mv, e);
  }
  int ans = INT_MAX;
  int cnt = 0;
  if (mv == 0) {
    int cnt2 = 0;
    rep(i,0,n) {
      cnt2 += a[i] > 0;
    }
    ans = min(ans, cnt2);
  }
  rep(i,0,n) {
    if (a[i] == mv) continue;
    if (a[i]-1==mv) {
      ans = 0;
      rep(k,0,n) {
        if (a[k] != 0) ans++;
      }
      cout << ans << '\n';
      return;
    }
    assert(a[i] > mv);
    if (a[i] != mv) {
      // check if a[i] can be decreased to mv
      while (a[i] > mv) {
        cnt++;
        a[i] %= ((a[i]/2) + 1);
      }
    }
  }
  ans = min(ans, cnt);
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

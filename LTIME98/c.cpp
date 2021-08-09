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
	int n, k, s;
  cin >> n >> k >> s;
  vector< int > a(n);
  for (auto& e:a) cin >> e;
  
  int ans = 0, cnt = 0, ps = 0;
  deque<int> q;
  rep(i,0,n) {
    if (a[i]+ps > s && (int)q.size() < k) {
      // new segment
      // cerr << "new segment ";
      ps = a[i];
      cnt++;
      q.push_front(1);
    } else if (a[i]+ps > s && (int)q.size() == k) {
      // cannot add new seg
      // delete last seg
      // cerr << "delete seg, new val ";
      int v = q.back();
      q.pop_back();
      cnt -= v;
      cnt++;
      ps = a[i];
      q.push_front(1);
    }
    else if (a[i]+ps<=s && (int)q.size() <= k) {
      // add to curr seg
      // cerr << "add to curr seg ";
      ps += a[i];
      if (q.empty()) {
        // cerr << "empty q ";
        q.push_front(1);
      } else {
        // add to front
        // cerr << "updatefront ";
        int v = q.front();
        q.pop_front();
        v++;
        q.push_front(v);
      }
      cnt++;
    } else {
      assert(false);
      // cerr << a[i] << ' ' << cnt << ' ' << ans << ' '  << ps << ' ' << q.size() << '\n';
    }
    assert((int)q.size() <= k);
    // cerr << a[i] << ' ' << cnt << ' ' << ans << ' '  << ps << ' ' << q.size() << '\n';
    ans = max(ans, cnt);
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

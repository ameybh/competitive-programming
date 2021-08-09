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
    if (a[i] > s) {
      q.clear();
      cnt = 0;
      ps = 0;
    } else {
      // can we add to previous seg?
      if (a[i] + ps <= s) {
        ps += a[i];
        cnt++;
        int v = 0;
        if (!q.empty()) {
          v = q.back();
          q.pop_back();
        }
        q.push_back(++v);
      }
      else if ((int)q.size() == 1 && a[i]<q.front()) {
        // if we have only 1 seg at the moment
        // can we remove first element of seg?
        int f = a[i-q.front()];
        int nv = ps-f+a[i];
        if (nv <= s) {
          // yes we can!
          ps -= f;
          ps += a[i];
        }
      }
      else {
        // can we create new seg?
        if ((int)q.size() < k) {
          // yes!
          cnt++;
          ps = a[i];
          q.push_back(1);
          
        } else {
          // no we can't
          // pop first seg
          int f = q.front();
          q.pop_front();
          cnt -= f;
          assert(cnt>=0);
          cnt++;
        }
        ps = a[i];
        q.push_back(1);
      }
    }
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

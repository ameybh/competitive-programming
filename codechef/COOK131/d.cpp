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
    // one |= e == 1;
    // two |= e == 2;
    if (e < mv) {
      smv = mv;
      mv = e;
    }
  }
  cout << smv << ' ' << mv << '\n';
  if (smv == INT_MAX) {
   cout << 0 << '\n';
   return; 
  }
  if (smv-1 == mv) {
    if (mv == 1) {
      mv = 0;
    } else {
      vector <pair<int,int>> z;
      for (auto& e:mp) {
        if (e.ff < mv) {
          z.pb({e.ss,e.ff});
        }
      }
      if ((int)z.size() == 0) {
        mv = 0;
      } else {
        sort(all(z));
        mv = z[(int)z.size()-1].ss;
      }
    }
  }
  cout << mv << '\n';
  int ans = 0;
  rep(i,0,n) {
    if (a[i] != mv) {
      ans++;
    }
    // assert(mv > a[i]);
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

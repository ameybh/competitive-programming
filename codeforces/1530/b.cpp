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
vector< int > dx = {-1, 1, 0, 0, -1, -1, 1, 1};
vector< int > dy = {0, 0, -1, 1, -1, 1, -1, 1};
int n, m;
pair<int,vector< vector< bool > >> getans (int start) {
  vector< vector< bool > > ans(n, vector< bool > (m));
  vector< vector< bool > > taken(n, vector< bool > (m));
  auto in = [&](int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
  };
  rep(i,start,n) {
    rep(j,0,m) {
      if (i == 0 || j == 0 || i == n-1 || j == m-1) {
        // try to place a dish
        if (!taken[i][j]) {
          ans[i][j] = 1;
          rep(k,0,8) {
            int x = i+dx[k];
            int y = j+dy[k];
            if (in(x,y))
              taken[x][y] = 1;
          }
        }
      }
    }
  }
  int cnt = 0;
  rep(i,0,n) {
    rep(j,0,m) {
      if (ans[i][j] == 1) cnt++;
    }
  }
  
  // for (auto&e:ans) {
    // rep(i,0,m) {
      // cout << (e[i] ? 1 : 0);
    // }
    // cout << '\n';
  // }
  // cout << '\n';
  return make_pair(cnt,ans);
}
void printTable (vector< vector< bool > > a) {
  // int n2 = n, m2 = m;
  // if (a.size() != n) {
    // swap(n2, m2);
  // }
  rep(i,0,n) {
    rep(j,0,m) {
      cout << a[i][j];
    }
    cout << '\n';
  }
}
void solve() {
  cin >> n >> m;
  // if (n < m) swap(n,m);
  pair<int,vector< vector< bool > >> a = getans(0);
  pair<int,vector< vector< bool > >> b = getans(1);
  if (a.ff > b.ff) {
    printTable(a.ss);
  } else {
    printTable(b.ss);
  }
  cout << "\n";
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

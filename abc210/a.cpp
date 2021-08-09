// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma GCC optimize("trapv")
#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
vector< int > dx = {-1, -1, 0};
vector< int > dy = {-1, 0, -1};
const ll inf = ULLONG_MAX;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n, m;
  ll c;
  cin >> n >> m >> c;
  vector < vector< ll > > a(n, vector< ll > (m));
  for (auto& e:a) {
    for (auto& f:e) cin >> f;
  }
  vector< vector< pair< pair<int,int>, ll > > >  dp(n, vector< pair<  pair<int,int>, ll > > (m, make_pair(make_pair(-1,-1), inf)));
  auto in = [&](int x, int y) {return (x >= 0 && y >= 0);};
  rep(i,0,n) {
    rep(j,0,m) {
      // cout << i+1 << ' ' << j+1 << ":\n";
      rep(k,0,3) {
        int x = i+dx[k], y = j+dy[k];
        if (in(x,y)) {
          // cout << x+1 << ' ' << y+1 << '\n';
          pair< pair<int,int>, ll > np = dp[x][y];
          int nx = np.first.first, ny = np.first.second;
          ll d = np.second;
          ll ad = a[x][y] + a[i][j] + c*(abs(i-x) + abs(j-y));
          dp[i][j] = make_pair(make_pair(x,y), ad);
          if (ad < d) {
            if (ad == d) {
              int man = abs(x-nx) + abs(y-ny);
              if (man > (abs(x-i) + abs(y-j))) {
                dp[x][y] = make_pair(make_pair(i,j), ad);
              }
            } else {
              dp[x][y] = make_pair(make_pair(i,j), ad);
            }
          }
          ll nd = inf;
          if (in(nx,ny))
            nd = a[nx][ny] + a[i][j] + c*(abs(i-nx) + abs(j-ny));
          if (nd < ad) {
            dp[i][j] = make_pair(make_pair(nx,ny), nd);  
          }
        }
      }
      // cout << dp[i][j].ss << '\n';
    }
  }
  
  ll ans = inf;
  for (auto& e:dp) {
    for (auto& f:e) {
      // cout << f.ss << ' ';
      ans = min(ans, f.ss);
    }
    // cout << '\n';
  }
  cout << ans;
	return 0;
}

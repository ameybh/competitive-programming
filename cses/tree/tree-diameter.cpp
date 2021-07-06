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
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n;
  cin >> n;
  vector< vector< int > > adj(n+1);
  rep(i,0,n-1) {
    int a, b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  // find farthest node
  vector< bool > vst(n+1, false);
  queue<pair<int,int>> q;
  q.push({1,0});
  int s = 0, sDistance = 0;
  while (!q.empty()) {
    auto [u, dis] = q.front();
    if (dis > sDistance) {
      sDistance = dis;
      s = u;
    }
    vst[u] = true;
    q.pop();
    for (auto& v: adj[u]) {
      if (!vst[v]) q.push({v, dis+1});
    }
  }
  q.push({s, 0});
  s = 0;
  sDistance = 0;
  vst.assign(n+1, false);
  while (!q.empty()) {
    auto [u, dis] = q.front();
    if (dis > sDistance) {
      sDistance = dis;
      s = u;
    }
    vst[u] = true;
    q.pop();
    for (auto& v: adj[u]) {
      if (!vst[v]) q.push({v, dis+1});
    }
  }
  cout << sDistance << '\n';
	return 0;
}

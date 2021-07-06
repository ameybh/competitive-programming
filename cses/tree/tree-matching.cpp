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
	vector<bool> taken(n+1);
	taken[0] = true;
	function<void(int,int)> dfs = [&] (int u, int pu) {
		for (auto& v:adj[u]) {
			if (v != pu) {
				dfs(v, u);
			}
		}
		if (!taken[u] && !taken[pu]) {
			taken[u] = true;
			taken[pu] = true;
		}
	};
	dfs(1,0);
	int cnt = count_if(all(taken),[&](bool e){return e == true;});
	cout << (cnt - 1)/2;
  return 0;
}

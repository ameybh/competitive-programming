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
	
	int n, m;
	cin >> n >> m;
	vector< vector< int > > adj(n);
	rep(i,0,m) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector< int > depth(n, -1);
	function< void (int, int) > dfs = [&](int at, int d) {
		if (depth[at] != -1) return;
		depth[at] = d;
		for (auto& nb:adj[at]) {
			dfs(nb, d+1);
		}
	};
	rep(i,0,n) {
		dfs(i,0);
	}
	rep(i,0,n) {
		depth[i] = depth[i]%2 + 1;
	}
	rep(i,0,n) {
		for(auto& nb:adj[i]) {
			if (depth[i] == depth[nb]) {
				return cout << "IMPOSSIBLE", 0;
			}
		}
	}
	rep(i,0,n) cout << depth[i] << ' ';
	return 0;
}

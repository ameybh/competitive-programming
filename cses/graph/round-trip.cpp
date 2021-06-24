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
		--u; --v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector< bool > vst(n, false);
	vector< int > parent(n);
	function<void(int,int)> dfs = [&](int u, int pu) {
		// cout << u << ' ';
		parent[u] = pu;
		vst[u] = true;
		for (auto& v:adj[u]) {
			if (v != pu) {
				if (vst[v]) {
					vector< int > ans;
					int u2 = u;
					while (v != u) {
						ans.pb(u);
						u = parent[u];
					}
					ans.pb(v);
					ans.pb(u2);
					cout << (int) ans.size() << '\n';
					for (auto& e:ans) cout << ++e << ' ';
					exit(0);
				} else {
					dfs(v, u);
				}
			}
		}
	};
	rep(i,0,n) {
		if (!vst[i]) {
			dfs(i,i);
			parent[i] = i;
		}
	}
	cout << "IMPOSSIBLE\n";
	
	return 0;
}

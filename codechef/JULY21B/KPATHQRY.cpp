// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma GCC optimize("trapv")
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
// LCA using binary lifting
// Source: https://cp-algorithms.com/graph/lca_binary_lifting.html
int n, l;
vector<vector<int>> adj;
int timer;
vector<int> tin, tout;
vector<vector<int>> up;
vector< int > parent;
void dfs(int v, int p) {
	parent[v] = p;
	tin[v] = ++timer;
	up[v][0] = p;
	rep(i,1,l+1) {
		up[v][i] = up[up[v][i-1]][i-1];
	}
	for (int u:adj[v]) {
		if (u != p)
			dfs(u, v);
	}
	tout[v] = ++timer;
}
bool is_ancestor(int u, int v) {
	return tin[u] <= tin[v] && tout[u] >= tout[v];
}
int lca(int u, int v) {
	if (is_ancestor(u,v)) return u;
	if (is_ancestor(v,u)) return v;
	repD(i,l,0) {
		if (!is_ancestor(up[u][i], v))
			u = up[u][i];
	}
	return up[u][0];
}
int sc(int u, int v) {
	int lc = lca(u, v);
	return (lc == u || lc == v);
}
void preprocess() {
	tin.resize(n);
	tout.resize(n);
	parent.resize(n);
	parent[0] = -1;
	timer = 0;
	l = ceil(log2(n));
	up.assign(n, vector<int>(l+1));
	dfs(0,0);
}
void solve() {
	cin >> n;
	adj.clear();
	adj.resize(n);
	rep(i,1,n) {
		int u, v;
		cin >> u >> v;
		--u; --v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	preprocess();
	int q;
	cin >> q;
	rep(i,0,q) {
		int k;
		cin >> k;
		vector< int > v(k);
		for (auto& e:v) {
			cin >> e;
			--e;
		}
		if (k < 3) {
			cout << "YES\n";
			continue;
		}
		int start = v[0], end = v[1];
		// cout << start+1 << ' ' << end+1 << '\n';
		bool ok = 1;
		rep(j,2,k) {
			if (!ok) break;
			if (start != 0 && is_ancestor(start, v[j])) {
				// check if v[j] in subtree of start
				int lc = lca(start, end);
				if (lc == start && is_ancestor(end, v[j])) {
					// cout << "1 " << start+1 << ' ' << end+1 << ' ' << v[j]+1 << '\n';
					end = v[j];
					continue;
				}
				// cout << "1 " << start+1 << ' ' << end+1 << ' ' << v[j]+1 << '\n';
				start = v[j];
				continue;
			}
			if (end != 0 && is_ancestor(end, v[j])) {
				// check if v[j] in subtree of end
				// cout << "2 " << start+1 << ' ' << end+1 << ' '<< v[j]+1 << '\n';
				end = v[j];
				continue;
			}
			int score = sc(start,v[j]) + sc(end,v[j]);
			if(score >= 2) {
				// cout << "4 " << score << '\n';
				continue;
			}
			ok = false;
			break;
		}
		cout << (ok ? "YES" : "NO") << '\n';
	}
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

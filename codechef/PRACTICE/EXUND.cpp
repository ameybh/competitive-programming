#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector< vector< int > > adj;
vector< bool > vst;
vector< int > times;

int dfs(int at) {
	if (times[at] != -1) return times[at];
	if (vst[at]) return 0;
	vst[at] = 1;
	bool leaf = 1;
	for (auto& nb : adj[at]) {
		if (times[nb] == -1) {
			leaf = 0;
			break;
		}
	}
	if (leaf) {
		return times[at] = 1;
	}
	int maxT = 0;
	for (auto& nb : adj[at]) {
		maxT = max(maxT, dfs(nb));
	}
	return times[at] = 1 + maxT;
}

void solve() {
	int n,k;
	cin >> n >> k;
	adj.assign(n, vector< int > ());
	vst.assign(n, 0);
	times.assign(n, -1);
	
	for (int i=0; i<n-1; i++) {
		int u,v;
		cin >> u >> v;
		--u, --v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(0);
	
	int ans = 0;
	for (auto& e:times) {
		if (e <= k) ans++;
		// cout << ind++ << ' ' << e << '\n';
	}
	cout << ans << '\n';
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

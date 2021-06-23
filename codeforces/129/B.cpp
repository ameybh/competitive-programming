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
	vector< int > degree(n);
	vector< vector< int > > adj(n);
	vector< bool > vst(n, false);
	rep(i,0,m) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].pb(v);
		adj[v].pb(u);
		degree[u]++;
		degree[v]++;
	}
	int ans = 0;
	while (1) {
		vector< int > q;
		rep(i,0,n) {
			if (!vst[i] && degree[i] == 1) {
				q.pb(i);
			}
		}
		if (q.empty()) {
			break;
		}
		ans++;
		for (auto& node:q) {
			vst[node] = true;
			for (auto& nb:adj[node]) {
				if (vst[nb]) continue;
				degree[nb]--;
			}
		}
	}
	cout << ans;
	return 0;
}
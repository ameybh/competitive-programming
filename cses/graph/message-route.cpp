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
	vector< int > parent(n, -1);
	parent[0] = 0;
	rep(i,0,m) {
		int u, v;
		cin >> u >> v;
		--u; --v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector< int > q;
	q.pb(0);
	rep(i,0,(int)q.size()) {
		int at = q[i];
		for (auto& nb:adj[at]) {
			if (parent[nb] == -1) {
				parent[nb] = at;
				q.pb(nb);
			}
		}
	}
	if (parent[n-1] == -1) return cout << "IMPOSSIBLE", 0;
	vector< int > path;
	int curr = n-1;
	while (parent[curr] != curr) {
		path.pb(curr);
		curr = parent[curr];
	}
	path.pb(curr);
	cout << path.size() << '\n';
	reverse(all(path));
	for (auto& e:path) cout << ++e << ' ';
	
	return 0;
}

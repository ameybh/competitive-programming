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
const ll INF = 2e18;
typedef pair<ll,int> pii;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector< vector< pii > > adj(n);
	rep(i,0,m) {
		int u, v, w;
		cin >> u >> v >> w;
		--u; --v;
		adj[u].pb({v, w});
	}
	vector< int > p (n, -1);
	vector< ll > d(n, INF);
	d[0] = 0;
	priority_queue< pii, vector<pii>, greater<pii> > q;
	q.push({0LL, 0});
	while (!q.empty()) {
		auto [dv, v] = q.top();
		q.pop();
		if (dv != d[v]) continue;
		for (auto& e:adj[v]) {
			auto [u, w] = e;
			if (d[v] + w < d[u]) {
				d[u] = d[v] + w;
				p[u] = v;
				q.push({d[u], u});
			}
		}
	}
	
	rep(i,0,n) cout << d[i] << ' ';
	
	return 0;
}

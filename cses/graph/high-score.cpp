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
struct Edge {
	ll a, b, cost;
};
int main() {	
	int n, m;
	cin >> n >> m;
	
	vector< Edge > e(m);
	vector< vector< int > > adj(n);
	rep(i,0,m) {
		cin >> e[i].a >> e[i].b >> e[i].cost;
		e[i].a--;
		e[i].b--;
		e[i].cost *= -1;
		adj[e[i].a].pb(e[i].b);
	}
	
	int timer = 0;
	vector< int> in(n), out(n);
	vector< short > color(n);
	function<void(int)> dfs = [&] (int v) {
		color[v] = 1;
		in[v] = timer++;
		for (auto& u:adj[v]) {
			if (color[u] == 0)
				dfs(u);
		}
		color[v] = 2;
		out[v] = timer++;
	};
	dfs(0);
	vector< ll > d(n, INF);
	d[0] = 0;
	int x = -1;
	rep(i,0,n) {
		x = -1;
		rep(j,0,m) {
				if (d[e[j].a] < INF) {
					if (d[e[j].b] > d[e[j].a] + e[j].cost) {
						d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
						x = e[j].b;
					}
				}
		}
	}
	if (x == -1) {
		rep(i,0,n) {
			x = -1;
			rep(j,0,m) {
					if (d[e[j].a] < INF) {
						if (d[e[j].b] > d[e[j].a] + e[j].cost) {
							d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
							x = e[j].b;
						}
					}
			}
		}		
		cout << -1*d[n-1];
	} else {
		cout << -1;
	}
	return 0;
}


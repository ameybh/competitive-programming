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
const ll INF = 1e18;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m, q;
	cin >> n >> m >> q;
	vector< vector< ll > > d(n, vector< ll > (n, INF));
	rep(i,0,n) d[i][i] = 0;
	rep(i,0,m) {
		int u, v;
		cin >> u >> v;
		--u; --v;
		ll w;
		cin >> w;
		d[u][v] = min(d[u][v], w);
		d[v][u] = min(d[v][u], w);
	}
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
			}
		}
	}
	rep(i,0,q) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		cout << (d[a][b] == INF ? -1 : d[a][b]) << '\n';
	}
	return 0;
}

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
typedef pair<int,int> pii;
const int INF = 1e9;
int main() {
	
	int n, m;
	cin >> n >> m;
	vector< vector< int > > adj(n);
	vector< int > indeg(n);
	rep(i,0,m) {
		int a, b;
		cin >> a >> b;
		--a; 
		--b;
		adj[a].pb(b);
		indeg[b]++;
	}
	vector< int > color(n, 0);
	vector< int > ans;
	function<void(int,int)> dfs = [&](int u, int pu) {
		// cout << pu+1 << "=>" << u+1 << ' ';
		color[u] = 1;
		for (auto& v:adj[u]) {
			if (color[v] == 1) {
				cout << "IMPOSSIBLE";
				exit(0);
			} else if (color[v] == 0) {
				dfs(v, u);
			}
		}
		color[u] = 2;
		ans.pb(u);
	};
	rep(i,0,n) {
		if (color[i] == 0) {
			dfs(i, -1);
			cout << '\n';
		}
	}
	reverse(all(ans));
	for (auto& u:ans) cout << u+1 << ' ';
	return 0;
}

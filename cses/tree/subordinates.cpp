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
	int n;
	cin >> n;
	
	vector< vector< int > > adj(n);
	rep(i,1,n) {
		int x;
		cin >> x;
		--x;
		adj[x].pb(i);
	}
	vector< int > ans(n);
	function<void(int)> dfs = [&] (int v) {
		ans[v] = 0;
		for (auto& u:adj[v]) {
			dfs(u);
			ans[v] += 1+ans[u];
		}
	};
	dfs(0);
	for (auto& e:ans) {
		cout << e << ' ';
	}
	return 0;
}

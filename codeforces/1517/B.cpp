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
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }
void solve() {
	int n, m;
	cin >> n >> m;
	vector< vector< pair< ll, bool > > > path(n, vector< pair< ll, bool > > (m));
	vector< pair< int, pair< int, int > > > shortest;
	rep(i,0,n) {
		rep(j,0,m) {
			cin >> path[i][j].ff;
			path[i][j].ss = false;
			shortest.pb({path[i][j].ff, {i,j}});
		}
	}
	
	sort(all(shortest));
	vector< vector< ll > > ans(n, vector< ll > (m, 0));
	
	
	rep(i,0,m) {
		int l = shortest[i].ff;
		int x = shortest[i].ss.ff;
		int y = shortest[i].ss.ss;
		ans[x][i] = l;
		path[x][y].ss = true;
	}
	rep(i,0,n) {
		int j1 = 0, j2 = 0;
		// cout << "Row " << i << '\n';
		while (j1 < m && j2 < m) {
			// cout << path[i][j2].ff << ' ' << path[i][j2].ss << '\n';
			if (ans[i][j1] != 0) {
				j1++;
				continue;
			}
			if (path[i][j2].ss){
				j2++;
				continue;
			}
			ans[i][j1] = path[i][j2].ff;
			++j1;
			++j2;
		}

	}
	rep(i,0,n) {
		rep(j,0,m) cout << ans[i][j] << ' ';
		cout << '\n';		
	}
	
	
	// rep(i,0,m) {
		// ans[
	// }
	
	// rep(i,0,m) {
		// ans[shortest[i].ss.ff][i] = shortest[i].ff;
		// path[shortest[i].ss.ff][shortest[i].ss.ss] = -1;
	// }
	// rep(i,0,n) {
		// rep(j,0,m) {
			// int j2 = j;
			// if (ans[i][j2] != 0) continue;
			// if (path[i][j] == -1) {
				// ans[i][j2] = path[i][j+1];	
				// ++j;
			// } else {
				// ans[i][j2] = path[i][j];
			// }
			
		// }
	// }
	// rep(i,0,n) {
		// rep(j,0,m) cout << ans[i][j] << ' ';
		// cout << '\n';
	// }
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
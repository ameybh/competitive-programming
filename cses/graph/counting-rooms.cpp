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

// direction vectors for left, right, up, down
vector< int > dx = {-1, 1, 0, 0};
vector< int > dy = {0, 0, 1, -1};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	// input given map
	vector< string > map(n);
	for (auto& row:map) cin >> row;
	// 2d vector to keep track of visited cells
	vector< vector< bool > > vst(n, vector< bool > (m, false));
	
	auto inside = [&](int x, int y) {
		// check if a cell is valid
		return x >=0 && x < n && y >=0 && y < m;
	};
	function<void(int,int)> dfs = [&](int x, int y) {
		// mark connected nodes visited
		vst[x][y] = true;
		// dfs on adjacent cells
		rep(i,0,4) {
			int nx = x + dx[i], ny = y + dy[i];
			if (inside(nx, ny) && map[nx][ny] == '.' && !vst[nx][ny]) {
				dfs(nx, ny);
			}
		}
	};
	// ans is number of connected components in map
	int ans = 0;
	rep(i,0,n) {
		rep(j,0,m) {
			if (map[i][j] == '.' && !vst[i][j]) {
				dfs(i,j);
				ans++;
			}
		}
	}
	cout << ans;
	
	return 0;
}

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
// direction vectors for up, down, right, left
vector< int > dx = {-1, 1, 0, 0};
vector< int > dy = {0, 0, 1, -1};
vector< char > dirs = {'U', 'D', 'R', 'L'};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	// input map
	vector< string > map(n);
	for (auto& row:map) cin >> row;
	pii source, target;
	rep(i,0,n) {
		rep(j,0,m) {
			if (map[i][j] == 'A') source = {i, j};
			if (map[i][j] == 'B') target = {i, j};
		}
	}
	vector< vector< int > > dir(n, vector< int > (m, -1));
	auto inside = [&](int x, int y) {
		// check if a cell is valid
		return x >=0 && x < n && y >=0 && y < m;
	};
	// use bfs to find shortest path
	vector< pii > q;
	q.pb(source);
	rep(i,0,(int)q.size()) {
		auto curr = q[i];
		rep(j,0,4) {
			auto [nx, ny] = curr;
			nx += dx[j];
			ny += dy[j];
			if (inside(nx, ny) && map[nx][ny] != '#' && dir[nx][ny] == -1) {
				dir[nx][ny] = j;
				q.pb({nx, ny});
			}
		}
	}
	// rep(i,0,n) {
		// rep(j,0,m) cout << dir[i][j];
		// cout << '\n';
	// }
	if (dir[target.ff][target.ss] == -1) {
		return cout << "NO", 0;
	}
	cout << "YES\n";
	string path = "";
	int pathLength = 0;
	while (target != source) {
		pathLength++;
		int d = dir[target.ff][target.ss];
		path += dirs[d];
		if (d&1) {
			target.ff += dx[d-1];
			target.ss += dy[d-1];
		} else {
			target.ff += dx[d+1];
			target.ss += dy[d+1];
		}
	}
	cout << pathLength << '\n';
	reverse(all(path));
	cout << path;
	
	return 0;
}

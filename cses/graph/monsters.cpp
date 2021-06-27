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
vector< int > dx = {0, 0, 1, -1};
vector< int > dy = {-1, 1, 0, 0};
vector< int > dirStr = {'L', 'R', 'D', 'U'};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector< string > map(n);
	for (auto& e:map) cin >> e;
	vector<pii> monsters;
	pair< int, int > start;
	vector< vector< int > > d(n, vector< int > (m, INF));
	auto inside = [&](int x, int y) {
		return x >= 0 && x < n && y >= 0 && y < m;
	};
	rep(i,0,n) {
		rep(j,0,m) {
			if (map[i][j] == 'M') {
				monsters.pb({i,j});
				d[i][j] = 0;
			}
			if (map[i][j] == 'A') {
				start = {i,j};
			}
		}
	}
	if (start.ff == 0 || start.ff == n-1 || start.ss == 0 || start.ss == m-1) {
		return cout << "YES\n0", 0;
	}
	queue<pair< pii, int >> q;
	rep(i,0,(int)monsters.size()) {
		q.push({{monsters[i].ff, monsters[i].ss}, 0});
	}
	while (!q.empty()) {
		pair< pii, int > f = q.front();
		q.pop();
		int x = f.ff.ff, y = f.ff.ss;
		int l = f.ss;
		rep(j,0,4) {
			int nx = x + dx[j];
			int ny = y + dy[j];
			if (inside(nx, ny) && map[nx][ny] != '#') {
				// cout << nx << ' ' << ny << '\n';
				if (l+1 < d[nx][ny]) {
					
					q.push({ {nx, ny}, l+1});
					d[nx][ny] = l+1;
				}
			}
		}
	}
	
	vector< vector< char > > dir(n, vector< char > (m, '*'));
	q.push({start, 0});
	// cout << start.ff << ' ' << start.ss12 << '\n';
	while (!q.empty()) {
		pair< pii, int > f = q.front();
		q.pop();
		int x = f.ff.ff, y = f.ff.ss;
		// cout << x+1 << ' ' << y+1 << ' ' << d[x][y] << '\n';
		int l = f.ss + 1;
		rep(i,0,4) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (inside(nx,ny)) {
				if (map[nx][ny] != '#' && dir[nx][ny] == '*' && l < d[nx][ny]) {
					q.push({{ nx, ny }, l});
					dir[nx][ny] = dirStr[i];
					if (nx == 0 || nx == n-1 || ny == 0 || ny == m-1) {
						// reached boundary safely
						vector< char > path;
						while (nx != start.ff || ny != start.ss) {
							path.pb(dir[nx][ny]);
							switch (dir[nx][ny]) {
								case 'L':
									ny++; break;
								case 'R':
									ny--; break;
								case 'U':
									nx++; break;
								case 'D':
									nx--; break;
							}
						}
						cout << "YES\n" << path.size() << '\n';
						reverse(all(path));
						for (auto& e:path) cout << e;
						exit(0);
					}
					
				}
			}
		}
	}
	cout << "NO";
	return 0;
}

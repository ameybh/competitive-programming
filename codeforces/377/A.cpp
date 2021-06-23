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

vector< int > dx = {-1, 1, 0, 0};
vector< int > dy = {0, 0, 1, -1};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n, m, k;
	cin >> n >> m >> k;
	vector< string > a(n);
	for (auto& e:a) cin >> e;
	
	int sx = 0, sy = 0;
	int cnt = 0;
	rep(i,0,n) {
		rep(j,0,m) {
			if (a[i][j] == '.') {
				cnt++;
				sx = i;
				sy = j;
			}
		}
	}
	function< void (int, int) > dfs = [&](int x, int y) {
		if (a[x][y] == '#' || a[x][y] == 'X' || a[x][y] == ',') {
			return;
		}
		cnt--;
		if (cnt < k) {
			a[x][y] = 'X';
		} else {
			a[x][y] = ',';
		}
		rep(i,0,4) { 
			int nx = x+dx[i], ny = y+dy[i];
			if (nx >=0 && nx < n && ny >= 0 && ny < m) {
				dfs(nx, ny);
			}
		}
	};
	
	
	dfs(sx, sy);
	for (auto& e:a) {
		for (auto& f:e) {
			if (f == ',') f = '.';
		}
		cout << e << '\n';
	}	
	
	return 0;
}
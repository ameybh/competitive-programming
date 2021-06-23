// Author: Amey Bhavsar - AB - ameybhavsar24@(github + twitter)
// IDE: Geany 1.36 on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

vector< pair< int, int > > knight_directions = {
	{-1,2},
	{-1,-2},
	{1,2},
	{1,-2},
	{2,-1},
	{2,1},
	{-2,-1},
	{-2,1},
};

bool inside(int x, int y) {
	return x>=0 && x<8 && y>=0 && y<8;
}

void solve() {
	
	string c, t;
	cin >> c >> t;
	int yc = c[0]-'a', xc = c[1]-'1', yt = t[0]-'a', xt = t[1]-'1';
	vector< pair< pair< int, int > , int > > q = {
		{{xc, yc}, 0}
	};
	vector< vector< bool > > vst(8, vector< bool > (8, false));
	
	for (int i=0; i<(int)q.size(); i++) {
		pair< pair< int, int >, int> at = q[i];
		if (vst[at.first.first][at.first.second]) continue;
		vst[at.first.first][at.first.second] = true;
		int x = at.first.first, y = at.first.second, moves = at.second;
		// cout << x << ' ' << y << ' ' << moves << '\n';
		if (x == xt && y == yt) {
			cout << moves << '\n';
			return;
		}
		
		// for all 8 knight_directions
		for (int j=0; j<8; j++) {
			int nx = x + knight_directions[j].first, ny = y + knight_directions[j].second;
			if (inside(nx, ny)) {
				q.push_back(
					{{nx, ny}, moves+1}
				);
			}
		}
	}
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

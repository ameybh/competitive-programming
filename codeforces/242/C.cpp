// Author: Amey Bhavsar - AB - ameybhavsar24@(github + twitter)
// IDE: Geany 1.36 on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define ff first
#define ss second
const int bound = 1e9;
// struct hash_pair {
    // template <class T1, class T2>
    // size_t operator()(const pair<T1, T2>& p) const
    // {
        // auto hash1 = hash<T1>{}(p.first);
        // auto hash2 = hash<T2>{}(p.second);
        // return hash1 ^ hash2;
    // }
// };
vector< pair< int, int > > dxy = {
	{-1, 0},
	{-1, -1},
	{0, -1},
	{1, -1},
	{1, 0},
	{1, 1},
	{0, 1},
	{-1, 1}
};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int x0, y0, x1, y1;
	cin >> x0 >> y0 >> x1 >> y1;
	int n;
	cin >> n;
	map< pair<int,int>, bool> g, vst;
	g[make_pair(x0,y0)] = true;
	g[make_pair(x1,y1)] = true;
	for (int i=0; i<n; i++) {
		int r, a, b;
		cin >> r >> a >> b;
		for (int j=a; j<=b; j++) {
			g[make_pair(r,j)] = true;
		}
	}
	vector< pair<pair<int,int>,int> > q;
	q.push_back({
		{x0, y0}, 0
	});
	vst[make_pair(x0, y0)]=true;
	for (int i=0; i<(int)q.size(); i++) {
		g[make_pair(q[i].ff.ff, q[i].ff.ss)] = false;
		int x = q[i].ff.ff, y = q[i].ff.ss;
		// cout << x << ' ' << y << ' ' << q[i].ss << '\n';
		if (x == x1 && y == y1) {
			return cout << q[i].ss, 0;
		}
		for (int j=0; j<8; j++) {
			int nx = x+dxy[j].ff, ny = y+dxy[j].ss;
			if (nx >=1 && nx <= bound && ny >=1 && ny <= bound) {
				if (g[make_pair(nx,ny)] == true && vst[make_pair(nx, ny)] == false) {
					q.push_back({
					 {nx, ny}, q[i].ss+1
					});
					vst[make_pair(nx,ny)] = true;
				}
			}
		}
	}
	cout << -1;
	return 0;
}
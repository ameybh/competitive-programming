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
	
	int n, m, k, t;
	cin >> n >> m >> k >> t;
	vector< pair< int, int > > waste_cells(k);
	rep(i,0,k) {
		cin >> waste_cells[i].first >> waste_cells[i].second;
	}
	vector< string > crops = {
		"Carrots",
		"Kiwis",
		"Grapes"
	};
	rep(i,0,t) {
		int r, c;
		cin >> r >> c;
		if (find(all(waste_cells), make_pair(r,c)) != waste_cells.end()) {
			cout << "Waste\n";
			continue;
		}
		int cnt = (r-1)*m + c;
		for (auto& [x, y]:waste_cells) {
			if (x < r || (x == r && y < c)) {
				cnt--;
			}
		}
		// cout << r << ' ' << c << ' ' << cnt << ' ';
		cout << crops[(cnt-1)%3] << '\n';
	}
	return 0;
}
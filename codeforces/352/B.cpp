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

const int nax = 1e5 + 10;
vector< vector< int > > pos(nax);
int main() {
	int n;
	cin >> n;
	int mx = 0;
	rep(i,0,n) {
		int x;
		cin >> x;
		pos[x].pb(i);
		mx = max(mx, x);
	}
	vector< pair< int, int > > ans;
	rep(i,1, mx+1) {
		if (!pos[i].empty()) {
			if ((int)pos[i].size() == 1) {
				ans.pb({i, 0});
			} else if ((int)pos[i].size() == 2) {
				ans.pb({i, pos[i][1] - pos[i][0]});
			} else {
				bool ap = 1;
				rep(j,2,(int)pos[i].size()) {
					ap &= (pos[i][j]-pos[i][j-1]) == (pos[i][j-1] - pos[i][j-2]);
				}
				if (ap) {
					ans.pb({i, pos[i][1] - pos[i][0]});
				}
			}
		}
	}
	cout << (int)ans.size() << '\n';
	for (auto& [num, d]: ans) {
		cout << num << ' ' << d << '\n';
	}
	return 0;
}
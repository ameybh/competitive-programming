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
bool fail = false;
int cnt;
void dfs(int x, int y, vector< vector< int > >& ans, int set) {
	if (x < 0 || x >= (int)ans.size() || y < 0 || y >= (int) ans.size()) {
		return;
	}
	if (cnt == 0) return;
	if (ans[x][y] != -1 && cnt != set) return;
	ans[x][y] = set;
	--cnt;
	if (y > 0 && ans[x][y-1] == -1) {
		dfs(x, y-1, ans, set);
	} else if (x+1 < (int)ans.size() && ans[x+1][y] == -1) {
		dfs(x+1, y, ans, set);
	}
}

void solve() {
	int n;
	cin >> n;
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	vector< vector< int > > ans(n, vector< int> (n, 0));
	
	rep(i,0,n) {
		ans[i][i] = a[i];
		rep(j,0,n) {
			if (j < i) ans[i][j] = -1;
		}
	}
	
	rep(i,0,n) {
		cnt = a[i];
		dfs(i,i,ans, a[i]);
	}
	vector< int > cnts(n, 0);
	rep(i,0,n) {
		rep(j,0,n) {
			if (j<=i) {
				cnts[ans[i][j]-1]++;
			}
		}
	}
	
	fail = 1;
	rep(i,0,n) {
		fail &= cnts[i] == i+1;
	}
	
	if (!fail) {
		cout << -1 << '\n';
		return;
	}
	rep(i,0,n) {
		rep(j,0,n) {
			if (j <= i) cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	solve();
	return 0;
}
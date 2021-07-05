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
	int n, q;
	cin >> n >> q;
	vector< vector< int > > dp(n+1, vector< int > (n+1, 0));
	vector< vector< bool > > grid(n+1, vector< bool >(n+1));
	rep(i,1,n+1) {
		char x;
		rep(j,1,n+1) {
			cin >> x;
			grid[i][j] = x == '*';
		}
	}
	rep(i,1,n+1) {
		rep(j,1,n+1) {
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + grid[i][j];
		}
	}
	auto query = [&](int x1, int y1, int x2, int y2) {
		return dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1];
	};
	rep(i,0,q) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << query(x1, y1, x2, y2) << '\n';
	}
	return 0;
}

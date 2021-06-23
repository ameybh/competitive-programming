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
const int INF = 2e9;
void mins (int& a, int b) {
	a = min(a, b);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector< string > pic(n);
	for (auto& row:pic) cin >> row;
	// get count of whites and black for cols in range [i:j]
	// using prefix sums
	vector< vector< int > > cnt(m+1, vector< int > (2));
	rep(i,0,m) {
		rep(j,0,n) {
			if (pic[j][i] == '.') {
				cnt[i+1][0]++;
			} else {
				cnt[i+1][1]++;
			}
		}
	}
	rep(i,1,m+1) {
		rep(j,0,2)
			cnt[i][j] += cnt[i-1][j];
	}
	// dp[i][j]
	// i is upto col i
	// j: 0 - white, 1 - black
	// cout << cnt[m][1]-cnt[0][1] << '\n';
	vector< vector< int > > dp(m+1, vector< int > (2, INF));
	dp[0][0] = dp[0][1] = 0;
	rep(i,1,m+1) {
		rep(a,x,y+1) {
			if (i-a >= 0) {
				mins(dp[i][0], dp[i-a][1] + (cnt[i][0]-cnt[i-a][0]));
				mins(dp[i][1], dp[i-a][0] + (cnt[i][1]-cnt[i-a][1]));
			}
		}
	}
	// for (auto& e:dp) {
		// for (auto& f:e) cout << f << ' ';
		// cout << '\n';
	// }
	cout << min(dp[m][0], dp[m][1]);
	return 0;
}
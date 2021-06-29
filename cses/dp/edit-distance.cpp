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
	string a, b;
	cin >> a >> b;
	int n = a.size(), m = b.size();
	vector< vector< int > > dp(n+5, vector< int > (m+5));
	
	rep(i,0,n+1) {
		rep(j,0,m+1) {
			if (i == 0) {
				dp[i][j] = j;
			} else if (j == 0) {
				dp[i][j] = i;
			} else if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
			}
		}
	}
	// for (auto& e:dp) {
		// for (auto& f:e) cout << f << ' ';
		// cout << '\n';
	// }
	
	cout << dp[n][m];
	return 0;
}

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
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n;
	cin >> n;
	vector< vector< int > > dp(n+1, vector< int > (3, INF));
	dp[0][0] = 0;
	vector< int > a(n+1);
	rep(i,1,n+1) cin >> a[i];
	rep(i,1,n+1) {
		dp[i][0] = min(dp[i][0], min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1);
		if (a[i] == 1 || a[i] == 3) {
			dp[i][1] = min(dp[i][1], min(dp[i-1][0], dp[i-1][2]));
		}
		if (a[i] == 2 || a[i] == 3) {
			dp[i][2] = min(dp[i][2], min(dp[i-1][0], dp[i-1][1]));
		}
	}
	cout << min({dp[n][0], dp[n][1], dp[n][2]});
	
	
	return 0;
}
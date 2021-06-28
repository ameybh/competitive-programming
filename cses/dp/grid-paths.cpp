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
	int n;
	cin >> n;
	vector<string>a(n);
	for(auto&e:a)cin>>e;
	vector<vector<int>>dp(n,vector<int>(n));
	dp[0][0]=(a[0][0] == '.' ? 1 : 0);
	rep(i,0,n){
		rep(j,0,n){
			if (a[i][j] == '*')continue;
			if (i-1>=0) dp[i][j]+=dp[i-1][j];
			if (j-1>=0) dp[i][j]+=dp[i][j-1];
			dp[i][j] %= MOD;
		}
	}
	cout << dp[n-1][n-1];
	return 0;
}

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
const int INF = INT_MAX;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, x;
	cin >> n >> x;
	vector< ll > dp(1e6+10, 0);
	vector< int > coins(n);
	for (auto& coin:coins) {
		cin >> coin;
	}
	/*
	 * dp[i] is number of ways to make i
	 * dp[0] = 1;
	 */
	dp[0] = 1;
	rep(s,1, x+1) {
		for (auto& coin:coins) {
			if (s-coin >= 0) {
				dp[s] += (dp[s-coin] % MOD);
				dp[s] %= MOD;
			}
		}
	}
	
	// rep(i,0,x+1) cout << dp[i] << ' ';
	cout << dp[x];
	return 0;
}

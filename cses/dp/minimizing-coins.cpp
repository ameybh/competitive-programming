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
	vector< ll > dp(1e6+10, INF);
	vector< int > coins(n);
	for (auto& coin:coins) cin >> coin;
	/*
	 * dp[0] = 0.
	 * dp[coin] = 1 foreach coin in coins.
	 * dp[n] = 1 + min(dp[n-coin]) foreach coin in coins.
	 */
	dp[0] = 0;
	for (auto& coin:coins) {
		rep(w,0,x+1) {
			if (w-coin >= 0) {
				dp[w] = min(dp[w], dp[w-coin]+1);
			}
		}
	}
	cout << (dp[x] == INF ? -1 : dp[x]);
	return 0;
}

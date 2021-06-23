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
#define rall(x) (x).rbegin, 2(x).rend()
#define MOD 1000000007

const ll INF = 2e10;
void maxs (ll& a, ll b) {
	a = max(a, b);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	vector< ll > dp(n+1, -INF);
	dp[0] = 0;
	rep(i,a,n+1) {
		maxs(dp[i], dp[i-a]+1);
	}
	rep(i,b,n+1) {
		maxs(dp[i], dp[i-b]+1);
	}
	rep(i,c,n+1) {
		maxs(dp[i], dp[i-c]+1);
	}
	cout << dp[n] << '\n';
	return 0;
}
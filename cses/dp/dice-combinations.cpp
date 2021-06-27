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
	vector< int > dp(n+10);
	auto ok = [&] (int x) { return x >= 0; };
	rep(i,1,7) dp[i] = 1;
	rep(i,1,n+1) {
		rep(j,1,7) {
			int k = i-j;
			if (ok(k)) {
				dp[i] += dp[k];
				if (dp[i] >= MOD) {
					dp[i] -= MOD;
				}
			}
			else break;
		}
	}
	cout << dp[n];
	
	return 0;
}

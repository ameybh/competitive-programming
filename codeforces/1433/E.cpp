// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 20.10.2020 19:57:54 IST
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
vector< ll > ans = {1, 3, 40, 1260, 72576, 6652800, 889574400, 163459296000, 39520825344000, 12164510040883200};
void solve() {
	ll n;
	cin >> n;
	cout << ans[n/2 - 1] << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
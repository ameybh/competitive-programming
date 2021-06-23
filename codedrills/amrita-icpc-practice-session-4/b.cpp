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
const ll MOD = 1000000007;
const ll nax = 1e5 + 5;
vector< ll > factmods(nax + 5);
void solve() {
		int n;
		cin >> n;
		map< ll, ll> mp;
		rep(i,0,n) {
			ll x;
			cin >> x;
			mp[x]++;
		}
		ll cnt = 0, ans = 1;
		rep(i,0,n) {
			if (mp[i] == 0) break;
			ans *= mp[i];
			ans %= MOD;
			++cnt;
		}
		ans *= factmods[n - cnt];
		ans %= MOD;
		cout << ans << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	factmods[0] = 1;
	rep(i, 1, nax) {
		factmods[i] = (i*factmods[i-1]) % MOD;
	}
	
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

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
void solve() {
	vector< int > cnt(32);
	int n, k;
	cin >> n >> k;
	rep(i,0,n) {
		int x;
		cin >> x;
		int b = 0;
		while (x) {
			cnt[b] += x & 1;
			x >>= 1;
			b++;
		}
	}
	int ans = 0;
	rep(i,0,32) {
		ans += (cnt[i]+k-1)/k;
	}
	cout << ans << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

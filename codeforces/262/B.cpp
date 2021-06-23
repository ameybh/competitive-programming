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
	int n,k;
	cin >> n >> k;
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	int cnt = 0;
	for (int i=0; i<min(k,n) && a[i] < 0; i++) {
		a[i] *= -1;
		cnt++;
	}
	k -= min(cnt, k);
	// for (auto& e:a) cout << e << ' ';
	// cout << '\n';
	ll s = accumulate(all(a), 0LL);
	if (k%2 == 0) {
		return cout << s, 0;
	}
	ll ans = LLONG_MIN;
	rep(i,0,n) {
		ans = max(ans, s+(-2*a[i]));
	}
	cout << ans;
	return 0;
}
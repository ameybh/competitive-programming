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
void solve() {
	int n;
	cin >> n;
	vector< int > a(n); for(auto& e:a) cin >> e;
	ll ans = 0;
	ll c = count(all(a),1);
	if (c == 1) {
		// cout << "count 1\n";
		cout << 0 << '\n';
		return;
	}
	int start = 0, end = n-1;
	while (start < n && a[start] == 0) start++;
	while (end >=0 && a[end] == 0) end--;
	if (end <= start) {
		cout << 0 << '\n';
		return;
	}
	// cout <<  start << ' ' << end << '\n';
	for (int i=start; i<=end; i++) {
		if (a[i] == 0) ans++;
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
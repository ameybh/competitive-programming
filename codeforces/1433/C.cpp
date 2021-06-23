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
	vector < int > a(n);
	for (auto& e:a) cin >> e;
	ll m = *max_element(all(a));
	vector< int > in;
	rep(i,0,n) {
		if (a[i] == m) in.pb(i);
	}
	rep(i,0,(int)in.size()) {
		bool e = 0;
		// cout << in[i] << '\n';
		if (in[i]-1 >= 0 && a[in[i]-1] < a[in[i]]) e = 1;
		if (in[i]+1 < n && a[in[i]+1] < a[in[i]]) e = 1;
		// y |= e;
		if (e) {
			cout << in[i] + 1 << '\n';
			return;
		}
	}
	cout << -1 << '\n';
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
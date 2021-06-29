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
	int n;
	cin >> n;
	map<string,int> mp;
	rep(i,0,3*n) {
		string p;
		int cnt;
		cin >> p >> cnt;
		mp[p] += cnt;
	}
	vector< int > ans;
	for (auto& e:mp) ans.pb(e.ss);
	sort(all(ans));
	for (auto& e:ans) cout << e << ' ';
	cout << '\n';
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

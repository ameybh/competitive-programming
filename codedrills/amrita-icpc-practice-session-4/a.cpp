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
	vector< pair< int,int >> a(n);
	rep(i,0,n) {
		cin >> a[i].ff;
		a[i].ss = i;
	}
	vector< pair< int, int > > b = a;
	sort(all(b));
	int off = 0;
	rep(i,0,n) {
		if (a[i].ff != b[i].ff) {
			off++;
		}
	}
	map< int, int > mp;
	bool atLeastTwo = false;
	rep(i,0,n) {
		mp[a[i].ff]++;
		atLeastTwo |= mp[a[i].ff] > 1;
		if (atLeastTwo) break;
	}
	cout << ((off == 2 || (atLeastTwo && off == 0)) ? "YES" : "NO") << '\n';
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

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
	
	int n, k;
	cin >> n >> k;
	vector< pair< int, pair< int, int > > > a(n);
	vector< int > b(n);
	rep(i,0,n) {
		cin >> a[i].ff >> a[i].ss.ff;
		a[i].ss.ss = i;
		b[i] = min(a[i].ff, a[i].ss.ff);
		a[i].ff = min(a[i].ff*2, a[i].ss.ff) - b[i];
	}
	sort(a.rbegin(), a.rend());
	ll ans = 0;
	rep(i,0,k) {
		int pos = a[i].ss.ss;
		ans += min(2*b[pos], a[i].ss.ff);
	}
	rep(i,k,n) {
		ans += b[a[i].ss.ss];
		// cout << a[i].ss.ss << ' ' << b[a[i].ss.ss] << '\n';
	}
	cout << ans << '\n';
	return 0;
}
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
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	const int mx = 1e5 + 10;
	bitset<mx+5> b;
	b[0] = 1;
	rep(i,0,n) {
		b |= b<<a[i];
	}
	vector< int > ans;
	rep(i,1,mx) {
		if (b[i]) {
			ans.pb(i);
		}
	}
	cout << ans.size() << '\n';
	for (auto& e:ans) cout << e << ' ';
	return 0;
}

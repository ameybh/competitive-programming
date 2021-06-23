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
	int n, m, x;
	cin >> n >> m >> x;
	vector< pair< int, int >  > a(n);
	rep(i,0,n) {
		cin >> a[i].ff;
		a[i].ss = i;
	}
	
	set< pair< int, int > > s;
	rep(i,0,m) {
		s.insert(mp(0,i));
	}
	vector< int > ans(n);
	sort(all(a));
	reverse(all(a));
	rep(i,0,n) {
		auto it = s.begin();
		pair< int , int > j = *it;
		j.first += a[i].ff;
		ans[a[i].ss] = j.ss;
		s.erase(it);
		s.insert(j);
	}
	vector < int > vals;
	for (auto& e:s) {
		vals.pb(e.ff);
	}
	rep(i,0,n) {
		if (i + 1 < m) {
			if ((vals[i+1] - vals[i]) > x) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
	rep(i,0,n) {
		cout << ++ans[i] << ' ';
	}
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
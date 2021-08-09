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
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }
const int nax = 1e5 + 10;
void solve() {
	int n;
  cin >> n;
  vector< int > cnt(nax, 1);
  set< pair<int,int> > s;
  vector< int > a(n);
  for (auto& e:a) cin >> e;
  rep(i,0,n) {
    if (cnt[a[i]] >= a[i]) continue;
    s.insert(make_pair(a[i]-cnt[a[i]], cnt[a[i]]));
    cnt[a[i]]++;
  }
  cout << (int)s.size() << '\n';
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

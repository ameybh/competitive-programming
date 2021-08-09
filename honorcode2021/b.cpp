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
void solve() {
	int n;
  cin >> n;
  vector< pair<int,int> > a(n);
  vector< int > ans(n);
  rep(i,0,n) {
    cin >> a[i].ff;
    a[i].ss = i;
  }
  sort(all(a));
  map< int , int > mp;
  rep(i,0,n) {
    mp[a[i].ff] = max(i, mp[a[i].ff]);
  }
  rep(i,0,n) {
    // people defeated = rounds
    // = people less than - people greater than
    int j = mp[a[i].ff], w = 0;
    if ((n-j-1)&1) {
      j--;
    }
    while (j > 0) {
      w++;
      j >>= 1;
    }
    ans[a[i].ss] = w;
  
  }
  rep(i,0,n) {
    cout << ans[i] << ' ';
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

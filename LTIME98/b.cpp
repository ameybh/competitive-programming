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
  cin >>n;
  vector<int>a(n), b(n);
  for (auto&e:a) cin >> e;
  for (auto&e:b) cin >> e;
  
  int minVal = 2e9;
  vector <int> pos;
  rep(i,0,n) {
    int val = (a[0] + b[i])%n;
    if (val<minVal) {
      minVal = val;
      pos.clear();
      pos.pb(i);
    } else if (val == minVal) {
      pos.pb(i);
    }
  }
  if ((int)pos.size() == 1) {
    int k = pos[0];
    rep(i,0,n) {
      cout << (a[i] + b[(i+k)%n])%n << ' ';
    }
    cout << '\n';
  } else {
    // assert(0);
    vector< int > c1(n), c2(n);
    int k1 = pos[0], k2 = pos[1];
    rep(i,0,n) {
      c1[i] = (a[i] + b[(k1+i)%n])%n;
    }
    rep(i,0,n) {
      c2[i] = (a[i] + b[(k2+i)%n])%n;
    }
    for (auto& e:c1) cout << e << ' ' ;
    cout << '\n';
    for (auto& e:c2) cout << e << ' ' ;
    cout << '\n';
    
    // if (c1 < c2) {
      // rep(i,0,n) {
        // cout << c1[i] << ' ';
      // }
    // } else {
      // rep(i,0,n) {
        // cout << c2[i] << ' ';
      // }
    // }
    // cout << '\n';
  }
  
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

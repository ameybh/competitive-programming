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

struct At {
  int a, b, c, d, e, id;
};

int key = 0;
// bool comp (At p, At q) {
  // switch(key) {
    // case 0: return p.a < q.a;
    // case 1: return p.b < q.b;
    // case 2: return p.c < q.c;
    // case 3: return p.d < q.d;
    // case 4: return p.e < q.e;
  // }
  // return true;
  // int sp = 0;
  // sp += p.a < q.a;
  // sp += p.b < q.b;
  // sp += p.c < q.c;
  // sp += p.d < q.d;
  // sp += p.e < q.e;
  // if (sp > 2) {
    // return true;
  // }
  // return false;
  // return better(p,q);
// }
bool better(At p, At q){
  int sp = 0;
  sp += p.a < q.a;
  sp += p.b < q.b;
  sp += p.c < q.c;
  sp += p.d < q.d;
  sp += p.e < q.e;
  return sp > 2;
}
void solve() {
	int n;
  cin >> n;
  vector< At > ath(n);
  rep(i,0,n) {
    ath[i].id = i;
    cin >> ath[i].a >> ath[i].b >> ath[i].c >> ath[i].d >> ath[i].e;
  }
  if (n == 1) {
    cout << 1 << '\n';
    return;
  }
  sort(all(ath), better);
  // for (auto& e:ath) {
    // cout << e.id + 1 << ' ';
  // }
  // cout << '\n';
  
  rep(i,1,n) {
    if (!better(ath[0], ath[i])) {
      cout << -1 << '\n';
      return;
    }
  }
  cout << ath[0].id+1 << '\n';
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

// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma GCC optimize ("trapv")
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
	int n, k;
  cin >> n >> k;
  vector< int > ch(4*n, -1);
  rep(i,0,k) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    ch[x] = y;
    ch[y] = x;
  }
  if (k == 0) {
    int op = n;
    // cout << op << ' ' ;
    ch[0] = op;
    ch[op] = 0;
  }
  function<int(int,int)>cntInter = [&](int x, int y) {
    if (x > y) swap(x,y);
    int cnt = 0;
    rep(i,x+1,y) {
      if (ch[i] != -1) {
        // cout << i+1 << ' ' << ch[i]+1 << '\n';
        if (!(ch[i] > x && ch[i] < y)) {
          cnt++;
        }
      }
    }
    return cnt;
  };
  // cout << cntInter(8,2) << '\n';
  // cout << cntInter(8,2) << '\n';
  
  rep(i,0,2*n-1) {
    if (ch[i] == -1) {
      
      int best = -1, bestInter = -1;
      rep(j,0,2*n) {
        int m = (n + i) % (2*n);
        int mL = (m - j), mR = (m+j);
        mL = (mL+2*n)%(2*n);
        mR = (mR+2*n)%(2*n);
        int interLeft = -1, interRight = -1;
        if (ch[mL] == -1 && mL != i) {
          interLeft = cntInter(i,mL);
        }
        if (ch[mR] == -1 && mR != i) {
          interRight = cntInter(i,mR);
        }
        if (interRight > bestInter) {
          bestInter = interRight;
          best = mR;
        }
        if (interLeft >= bestInter) {
          bestInter = interLeft;
          best = mL;
        }
      }
      /*
      rep(j,0,2*n) {
        if (i != j && ch[j] == -1) {
          int inter = cntInter(i,j);
          // if (k > 0) {
            if (inter > bestInter) {
              bestInter = inter;
              best = j;
            }
          // } else {
            // if (inter >= bestInter) {
              // bestInter = inter;
              // best = j;
            // }            
          // }
          // cout << "If draw " << i+1 << ' ' << j+1 << '\n' << cntInter(i,j) << '\n';
        }
      }
      */
      // if (best == -1) {
        // cout << "F: \n";
        // cout << i << ' ' << ch[i] << '\n';
      // }
      ch[i] = best;
      ch[best] = i;
      // cout << "New chord: " << i+1 << ' ' << ch[i]+1 << '\n';
    }
  }
  vector< bool > vst(2*n);
  int ans = 0;
  rep(i,0,2*n) {
    if (vst[i]) continue;
    vst[i] = true;
    vst[ch[i]] = true;
    int cnt = cntInter(i,ch[i]);
    // cout << i+1 << ' ' << ch[i]+1 << ' ' << cnt << '\n';
    
    ans += cnt;
  }
  assert(ans % 2 == 0);
  cout << ans/2 << '\n';
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

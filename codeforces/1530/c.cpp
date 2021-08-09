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
  vector< int > a(n), b(n);
  for (auto& e:a) cin >> e;
  for (auto& e:b) cin >> e;
  sort(all(a), greater<int>());
  sort(all(b), greater<int>());
  int aScore = 0, bScore = 0;
  multiset< int > aHigh, bHigh;
  rep(i,0,n-(n/4)) {
    aHigh.insert(a[i]);
    bHigh.insert(b[i]);
    aScore += a[i];
    bScore += b[i];
  }
  multiset< int, greater<int> > extraA, extraB;
  rep(i,0,n-(n/4)) {
    extraA.insert(a[i]);
    extraB.insert(b[i]);
  }
  if (aScore >= bScore) {
    cout << 0 << '\n';
    return;
  }
  int ans = 0;
  int length = n;
  while (aScore < bScore) {
    // int leastA = *aHigh.begin(), leastB = *bHigh.begin();
    // int newA = 100, newB = 0;
    // if (!extraB.empty()) {
      // newB = *extraB.begin();
      // extraB.erase(extraB.begin());
    // }
    length++;
    int lengthChoice = length - (length/4);
    length--;
    if (lengthChoice > length - (length/4)) {
      // we don't need to delete least element
      aScore += 100;
      aHigh.insert(100);
      if (!extraB.empty()) {
        bScore += *extraB.begin();
        bHigh.insert(*extraB.begin());
        extraB.erase(extraB.begin());
      } else {
        bHigh.insert(0);
      }
    } else {
      // we delete least element
      int leastA = *aHigh.begin();
      aScore += 100-leastA;
      aHigh.erase(aHigh.begin());
      aHigh.insert(100);
    }
    length++;
    ans++;
  }
  cout << aScore << ' ' << bScore << ' ';
  cout << ans << '\n';
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

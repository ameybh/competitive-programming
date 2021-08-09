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

int k(int n) {
  return n - (n/4);
}

void solve() {
	int n;
  cin >> n;
  vector< int > a(n), b(n);
  for (auto& e:a) cin >> e;
  for (auto& e:b) cin >> e;
  sort(all(a));
  sort(all(b));
  int aScore = 0, bScore = 0;
  int v = k(n), la = n-v, lb = n-v; // inclusive
  repD(i,n-1,n-v) {
    aScore += a[i];
    bScore += b[i];
  }
  int ans = 0, l = n;
  cout << aScore << ' ' << bScore << '\n';
  while (aScore < bScore) {
    l++;
    int v2 = k(l);
    if (v2 > v) {
      aScore += 100;
      if (lb > 0) {
        lb--;
        bScore += b[lb];
      }
    } else {
      aScore += 100 - a[la];
      a.pb(100);
      la++;
    }
    cout << aScore << ' ' << bScore << '\n';
    ans++;
  }
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

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

int n;
vector< int > a;
void ways (vector<int>& p, int level) {
  int w = p[(int)p.size()-1];
  rep(i,w,n) {
    p.pb(i);
    int z = 0;
    if (check(p)) {
      
    }
    p.pop_back();
  }
}

void solve() {
  cin >> n;
  a.resize(n);
  for (auto& e:a) cin >> e;
  assert(n<=20);
  
  
  
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

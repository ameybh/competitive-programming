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
	vector< vector< int > > ans(n, vector < int > (n));
	// int i = n-1, j = 0, val = 1;
	int f = n-1, j = 0;
	int val = 1;
	rep(i,0,2*n-1) {
		int l = min(n-j, n-f);
		rep(k,0,l) {
			if (i & 1) {
				ans[j+k][f+k] = val;
			} else {
				ans[f+k][j+k] = val;
			}
			++val;
		}
		if (f == 0) {
			j++;
		}		
		if (f != 0)
			f--;

	}
	
	// for (auto& e:ans) {
		// for (auto& z:e) cout << z << ' ';
		// cout << '\n';
	// }
	vector < int > dx = {-1, 0, 1, 0};
	vector < int > dy = {0, 1, 0, -1};
	rep(i,0,n) {
		rep(j,0,n) {

			rep(k,0,4) {
				int ni = i + dx[k], ny = j + dy[k];
				if (ni >= 0 && ni < n && ny >=0 && ny < n) {
					int q = abs(ans[i][j] - ans[ni][ny]);
					if (q == 1) {
						cout << -1 << '\n';
						return;
					}
					// assert() >  1);
					}
				}
				
			}

		}
	rep(i,0,n) {
		rep(j,0,n) {
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
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
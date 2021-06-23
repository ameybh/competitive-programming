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
vector< int > dx = {1, -1, 0, 0};
vector< int > dy = {0, 0, 1, -1};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,m;
	char p;
	cin >> n >> m;
	cin >> p;
	vector< string > a(n);
	for (auto& e:a) cin >> e;
	ll ans = 0;
	set< char > ss;
	rep(i,0,n) {
		rep(j,0,m) {
			if (a[i][j] == p) {
				rep(k,0,4) {
					int nx = i+dx[k], ny = j+dy[k];
					if (nx >=0 && nx < n && ny >=0 && ny < m && a[nx][ny] != p && a[nx][ny] != '.' && !ss.count(a[nx][ny])) {
						ss.insert(a[nx][ny]);
						// cout << nx << ' ' << ny << ' ' << a[nx][ny] << '\n';
						++ans;
					}
				}
			}
			// cout << '\n';
		}
	}
	cout << ans << '\n';
	return 0;
}
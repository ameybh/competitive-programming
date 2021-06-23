#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,m;
vector< vector< int > > a;
void sol() {
	cin >> n >> m;
	a.assign(n, vector< int > (m, 0));
	for (auto& r:a)
		for (auto& e:r) cin >> e;
	ll ans = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			int r1=i,r2=i,c1=j,c2=j,cnt=0;
			while (r1>=0 && r2<n && c1>=0 && c2<m && a[r1][j] == a[r2][j] && a[i][c1] == a[i][c2]) {
				r1--;
				r2++;
				c1--;
				c2++;
				cnt++;
			}
			ans+=cnt;
		}
	}
	cout << ans << '\n';
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    
}

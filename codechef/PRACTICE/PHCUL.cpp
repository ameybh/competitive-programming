#include <bits/stdc++.h>
using namespace std;


#define rep(i, n)   for(int i = 0; i < (n); ++i)
#define MAX 5005
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ld dist(pii x,pii y){
	x.fst-=y.fst,x.snd-=y.snd;
	return sqrt(1ll*x.fst*x.fst+1ll*x.snd*x.snd);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int x,y,n,m,k;
		cin >> x >> y >> n >> m >> k;
		// int npx[MAX],npy[MAX],mpx[MAX],mpy[MAX],kpx[MAX],kpy[MAX];
        vector<pii> v[3];
		rep(i,n) {
            int a,b;
            cin >> a >> b;
            v[0].pb({a,b});
        }
		rep(i,m) {
            int a,b;
            cin >> a >> b;
            v[1].pb({a,b});
        }
		rep(i,k) {
            int a,b;
            cin >> a >> b;
            v[2].pb({a,b});
        }

        vector<ld> v0,v1,v2;
        rep(i,n) {
            ld cur = 4e9;
            rep(j,m) {
                cur = min(cur,dist(v[0][i],v[1][j]) + dist(mp(x,y),v[1][j]));
            }
            v0.pb(cur);
        }
        rep(i,m) {
            ld cur = 4e9;
            rep(j,n) {
                cur = min(cur,dist(v[0][j],v[1][i]) + dist(mp(x,y),v[0][j]));
            }
            v1.pb(cur);
        }
        ld ans = 1e10;
        rep(i,k) {
            rep(j,m) {
                ans = min(ans, dist(v[2][i], v[1][j]) + v1[j]);
            }
            rep(j,n) {
                ans = min(ans, dist(v[2][i], v[0][j]) + v0[j]);
            }
            
        }

		cout << fixed << setprecision(10) << ans << "\n";
	}
	
	return 0;
}
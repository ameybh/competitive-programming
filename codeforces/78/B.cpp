// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second


// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007

//make sure to change MAXN according to constraints
#define MAXN 100005


ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}

//ll t,n,k,a[MAXN],b[MAXN];
ll n;
char ans[200];
char color[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin >> n;
	rep (i,0,7) {
		ans[i] = color[i];
	}
	int iter = 7;
	rep(i,7,n) {
		
		if (color[iter%7] == ans[i-1] || color[iter%7] == ans[i-2] || color[iter%7] == ans[0] || color[iter%7] == ans[1])
			iter += 3;
		
		ans[i] = color[iter%7];
		iter++;
	}

	rep(i,0,n) cout << ans[i];
	
	
	
	return 0;
}
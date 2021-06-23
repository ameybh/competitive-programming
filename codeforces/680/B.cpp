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
#define MAXN 1005


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

ll t,n,k,a[MAXN],b[MAXN],cnt = 0;
//void solution() {
	//cin >> n;
//}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> n >> k;
	
	rep(i,1,n+1) cin >> a[i];
	rep(i,1,n+1) {
		if (a[i]) {
			int dist = k-i;
			int j = k+dist;
			if (j < 1 || j > n) {
				cnt ++;
				//cout << i << "f\n";
			}
			else if (a[j]) {
				cnt ++;
				//cout << i << "s\n";
			}
		}
	}
	
	
	cout << cnt << "\n";
	return 0;
}
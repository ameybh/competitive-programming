// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

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

ll fe (ll x, ll n) {
	ll ans = 1;
	while (n>0) {
		if (n&1) {
			ans = (x*ans) % MOD;
		}
		n /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}

ll n,a;


void solution() {
	//cout << "HelloWorld!\n";
	//cout << fe(2,3);
	cin >> n >> a;
	ll elems = 0;
	int64_t ans = 0;
	ll curr = a;
	rep(i,0,n) {
		elems = 2*i+1;
		ans %= MOD;
		int64_t newAns = fe(curr,elems) % MOD;
		ans += (newAns % MOD);
		//cout << fe(curr,elems) << "fe\n";
		//cout << curr << " " << ans  << "\n";
		ans %= MOD;
		//cout << curr <<  " " << ans << " " << curr*ans << "\n";
		curr *= (newAns % MOD);
		curr %= MOD;
	}
	//cout << curr << " " << ans  << "\n";
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--) {
		solution();
	}
	//cout << fe(t,z) << "\n";
	return 0;
}

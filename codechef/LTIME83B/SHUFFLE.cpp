// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/LTIME83

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
#define MAXN 500001

ll t,n,a[MAXN],b[MAXN],k,m;
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

bool cs(ll ar[], ll len) {
	bool ok = true;
	rep(i,0,n-1) {
		ok &= a[i] <= a[i+1];
	}
	return ok;
}

void solution() {
	cin >> n >> k;
	vector< pair<int,int> > data(n);
	rep(i,0,n) {
		cin >> a[i];
	}
	rep(i,0,n) {
		m = a[i];
		if (abs(m-(i+1)) % k != 0) {
			cout << "no\n";
			return;
		}
	}
	cout << "yes\n";
	
	//sort(all(data));
	
	//rep(i,0,n) {
		//if (abs(data[i].ss - i) % k != 0) {
			//cout << "no\n";
			//return;
		//}
	//}
	//cout << "yes\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

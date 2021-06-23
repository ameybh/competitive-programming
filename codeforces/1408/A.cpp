// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Grakn Forces 2020

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

// ll modmul(ll a, ll b) {
    // return ((a%MOD) * (b%MOD)) % MOD;
// }

// ll modadd(ll a , ll b){
    // return((a%MOD)+(b%MOD)+MOD)%MOD;
// }

// ll modsub(ll a , ll b){
    // return((a%MOD) - (b%MOD) + MOD)%MOD;
// }
#define MOD 1000000007
int n;
void solution() {
	cin >> n;
	vector< vector< int > > a(3, vector< int > (n));
	rep(i,0,3) {
		rep(j,0,n) cin >> a[i][j];
	}
	vector< int > p(n);
	int k = 0;
	p[0] = a[0][0];
	rep(i,1,n-1) {
		if (a[k][i] == p[i-1]) {
			++k;
			k %= 3;
		}
		if (a[k][i] == p[i-1]) {
			++k;
			k %= 3;
		}
		p[i] = a[k][i];
	}
	
	set< int > val = {a[0][n-1], a[1][n-1], a[2][n-1]};
	if (val.count(p[n-2])) val.erase(p[n-2]);
	if (val.count(p[0])) val.erase(p[0]);
	assert((int)val.size()>0);
	p[n-1] = *val.begin();
	for (auto& e:p)cout << e << ' ';
	cout << '\n';
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
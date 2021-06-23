// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces Round #672 (Div. 2) 

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
int n,k;
vector<int> a;
void solution() {
	cin >> n >> k;
	a.resize(n);
	rep(i,0,n) {
		cin >> a[i];
	}
	ll ans = *max_element(all(a));
	ll curr = 0;
	bool fi = 1;
	rep(i,0,n)  {
		bool p = 1, v = 1;
		if (i + 1 < n) {
			p &= a[i] > a[i+1];
		}
		if (i - 1 > -1) {
			p &= a[i] > a[i-1];
		}
		if (p) {
			if (fi) fi = 0;
			curr += a[i];
			// cout << "Peak:  " << a[i] << '\n';
		}
			
		
		if (i + 1 < n) {
			v &= a[i] < a[i+1];
		}
		if (i - 1 > -1) {
			v &= a[i] < a[i-1];
		}
		if (v) {
			if (!fi) 
				curr -= a[i];
			// cout << "Valley: " << a[i] << '\n';
		}
		ans = max(ans, curr);
	}
	cout << ans << '\n';
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
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces Round #669 (Div. 2) 
// Sep/08/2020 20:05UTC+5.5

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
vector<int> a;
void solution() {
	cin >> n;
	a.resize(n);
	vector<int> b;
	for (auto& e:a) {
		cin >> e;
	}
	
	sort(all(a));
	reverse(all(a));
	b.pb(a[0]);
	int g = a[0];
	a.erase(a.begin());
	rep(i,1,n) {
		int mx = 0, mxIndex = 0;
		rep(j,0,(int)a.size()) {
			if (__gcd(g, a[j]) > mx) {
				mx = __gcd(g,a[j]);
				mxIndex = j;
			}
		}
		
		g = __gcd(a[mxIndex], g);
		b.pb(a[mxIndex]);
		a.erase(a.begin()+mxIndex);
		
	}
	for (auto& e:b) cout << e << ' ';
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
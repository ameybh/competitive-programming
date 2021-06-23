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

//make sure to change MAXN according to constraints
#define MAXN 100001

ll t,n,k;
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


void solution() {
	cin >> n;
	vector<ll> can(n);
	rep(i,0,n) cin >> can[i];
	
	
	ll m = 1;
	ll lp = can[0], rp = 0;
	ll lt = can[0], rt = 0;
	can.erase(can.begin());
	bool alice = false;	
	
	while ((ll) can.size() > 0) {
		if (!alice) {
			ll iter = can.size()-1;
			rp = 0;
			while (rp <= lp && iter >= 0) {
				rp += can[iter];
				iter--;
				can.pop_back();
			}
			//~cout << rp << "\n";
			alice = true;
			rt += rp;
		}
		else {
			lp = 0;
			ll iter = 0;
			while (lp <= rp && (ll) can.size() > 0) {
				lp += can[iter];
				can.erase(can.begin());
			}
			alice = false;
			lt += lp;
		}
		
		//~for (auto x : can) {
			//~cout << x << " ";
		//~}
		//~cout << "\n";
		
		m++;
	}
	//~if (m % 2 == 0) {
		//~lt += lp;
	//~}
	
	cout << m << " " << lt << " " << rt << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Code Ensemble 2020

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
int n,q;
// vector<int> a;
void solution() {
	string s;
	cin >> s;
	map< char, int > mp1;
	for(auto& e:s) {
		mp1[e]++;
	}
	int x,y;
	cin >> x >> y;
	cin >> q;
	rep(i,0,q) {
		int u,v;
		cin >> u >> v;
		int du = v - y;
		int dv = u - x;
		bool yes = 1;
		int moves = 0;
		if (du > 0) {
			if (mp1.find('U') != mp1.end() && mp1['U'] >= du) {
				moves += du;
			} else {
				yes = 0;
			}
		} else if (du < 0) {
			du = -du;
			if (mp1.find('D') != mp1.end() && mp1['D'] >= du) {
				moves += du;
			} else {
				yes = 0;
			}
		}
		
		if (dv > 0) {
			if (mp1.find('R') != mp1.end() && mp1['R'] >= dv) {
				moves += dv;
			} else {
				yes = 0;
			}
		} else if (dv < 0) {
			dv = -dv;
			if (mp1.find('L') != mp1.end() && mp1['L'] >= dv) {
				moves += dv;
			} else {
				yes = 0;
			}
		}
		
		if (yes) {
			cout << "YES " << moves << '\n';
		} else {
			cout << "NO\n";
		}
		
	}
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

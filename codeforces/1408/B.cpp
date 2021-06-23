// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Grakn Forces 2020
#pragma GCC optimize ("trapv")
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
int n, k;
vector<int> a;
void solution() {
	cin >> n >> k;
	bool eq = 1;
	a.resize(n);
	cin >> a[0];
	rep(i,1,n) {
		cin >> a[i];
		eq &= a[i] == a[i-1];
	}
	
	if (k == 1 && !eq) {
		cout << -1 << '\n';
		return;
	} else if (k == 1) {
		cout << 1 << '\n';
		return;
	}
	
	vector< vector< int > > b(10010, vector< int > (n, -1));
	// int pos = 0;
	rep(pos,0,10005) {
		if (accumulate(all(a), 0) == 0) break;
		set< int > s1;
		rep(i,0,n) {
			if (a[i] == 0) {
				s1.insert(a[i]);
				b[pos][i] = a[i];
				continue;
			}
			if (s1.count(a[i])) {
				b[pos][i] = a[i];
				a[i] = 0;
			} else {
				if ((int)s1.size() < k) {
					s1.insert(a[i]);
					b[pos][i] = a[i];
					a[i] = 0;
				} else {
					int v = -1;
					for (auto& e:s1) {
						if (e < a[i]) {
							v = e;
						} else {
							break;
						}
					}
					if (v == -1) {
						b[pos][i] = 0;
					} else {
						a[i] -= v;
						b[pos][i] = v;
					}
				}
			}
		}		
	}
	
	rep(i,0,10005) {
		bool eqa = 1;
		rep(j,0,n) {
			// cout << b[i][j] << ' ';
			eqa &= (b[i][j] == -1 || b[i][j] == 0);
		}
		// cout << '\n';
		if (eqa) {
			cout << i << '\n';
			return;
		}
		
	}
	cout << -1 << '\n';
	
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
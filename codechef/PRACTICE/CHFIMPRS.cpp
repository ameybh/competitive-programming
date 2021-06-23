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
//~#define mp make_pair
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
const int MAXN  = 305;
int t,n,a[MAXN][MAXN],m;
map<int,int> mp;


int get() {
	while (mp.begin()->ss == 0) {
		mp.erase(mp.begin());
	}
	mp[mp.begin()->ff]-=2;
	return mp.begin()->ff;
}

void solution() {
	mp.clear();
	cin >> n >> m;
	rep(i,0,n) {
		rep(j,0,m) {
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	
	vector<int> odds;
	for (auto it : mp) {
		if (it.ss&1) {
			odds.pb(it.ff);
		}
	}
	
	
	if ((m&1 &&(int) odds.size() > n) || (m % 2 == 0 && !odds.empty())) {
		cout << -1 << "\n";
		return;
	}
	
	
	rep(i,0,n)
		rep(j,0,m)
			a[i][j] = -1;
	
	rep(i,0,(int) odds.size()) {
		a[i][m/2] = odds[i];
		mp[odds[i]]--;
	}
	
	rep(i,0,n) {
		rep(j,0,m/2 + 1) {
			if (a[i][j] == -1) {
				int val = get();
				if (m - j - 1 == j) {
					a[i][j] = val;
					a[i+1][j] = val;
				}
				else {
					a[i][j] = val;
					a[i][m-j-1] = val;
				}
				
			}
		}
	}
	
	rep(i,0,n) {
		rep(j,0,m) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	
	
}



int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

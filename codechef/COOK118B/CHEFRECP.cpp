// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: COOK118B

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
#define MAXN 1001

int t,n,a[MAXN],b[MAXN];
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
	set<int> s;
	cin >> n;
	rep(i,0,n) {
		cin >> a[i];
		s.insert(a[i]);
	}
		
	map<int,int> mp;
	map<int,int> mp2;
	
	rep(i,0,n) {
		mp[a[i]]++;
	}
	
	for (auto i  = mp.begin(); i != mp.end(); i++) {
		mp2[i->ss]++;
	}
	
	
	if ((int)mp2.size() != (int)s.size()) {
		cout << "NO\n";
		return;
	}	
	set<int> ns;
	rep(i,0,n) {
		if (i > 0) {
			if (a[i] != a[i-1] && ns.count(a[i]) > 0) {
				cout << "NO\n";
				return;
			}
		}
		ns.insert(a[i]);
	}
	cout << "YES\n";
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

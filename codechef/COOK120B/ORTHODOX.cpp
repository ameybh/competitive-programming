// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: July Cook-Off 2020 Division 2

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

// struct compare {
	// operator () (ll a, ll b) const {
		// bitset<64> ba(a), bb(b);
		// int i=63;
		// while (i>=0&&ba[i]!=1)
			// i--;
		// int cntA = i-__builtin_popcount(a);
		// int i=63;
		// while (i>=0&&bb[i]!=1)
			// i--;
		// int cntB = i-__builtin_popcount(b);
		// return cntA < cntB;
	// }
// };

bool compare (ll a, ll b) {
	bitset<64> ba(a), bb(b);
		int i=63;
		while (i>=0&&ba[i]!=1)
			i--;
		int cntA = i-__builtin_popcount(a);
		i=63;
		while (i>=0&&bb[i]!=1)
			i--;
		int cntB = i-__builtin_popcount(b);
		return cntA < cntB;
}

int n;
vector<ll> a;
void solution() {
	cin >> n;
	a.resize(n);
	map<ll,int> s;
	for (auto& e:a) {
		cin >> e;
		s[e]++;
	}
	if ((int) s.size() != n) {
		cout << "NO\n";
		return;
	}
	sort(all(a));
	rep(i,0,n) {
		if (!(a[i]&(a[i]+1))&&a[i]) {
			if (i < 2)
				continue;
			// if (a[i-1] <= a[i] && a[i-2] <= a[i]) {
				cout << "NO\n";
				return;
			// }
		}
	}
	
	
	// sort(all(a),compare);
	// set<ll> store;
	// rep(i,1,n) {
		// ll val = a[i]&a[i-1];
		// if (store.count(val)==0) {
			// store.insert(val);
		// } else {
			// cout << "NO\n";
			// return;
		// }
	// }
	
	ll tmp = a[0];
	set<ll> store;
	rep(i,0,n) {
		store.insert(a[i]);
	}
	rep(i,1,n) {
		tmp |= a[i];
		if (store.count(tmp)==0)
			store.insert(tmp);
		else {
			cout << "NO\n";
			return;
		}
	}
	
	// for (auto& e:a) {
		// cout << e << " ";
	// }
	
	cout << "YES\n";
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

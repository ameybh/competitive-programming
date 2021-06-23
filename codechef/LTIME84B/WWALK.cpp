// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

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
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001

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

int n;
vector<int> a,b;
void solution() {
	cin >> n;
	a.assign(n, 0);
	b.assign(n, 0);
	
	rep(i,0,n) {
		cin >> a[i];
	}
	rep(i,0,n) {
		cin >> b[i];
	}
	
	ll ad = 0, bd = 0;
	ll ans = 0;
	
	vector<ll> da(n);
	vector<ll> db(n);
	
	rep(i,0,n) {
		da[i] = a[i];
		db[i] = b[i];		
	}
	
	rep(i,1,n) {
		da[i] += da[i-1];
		db[i] += db[i-1];
	}
	
	rep(i,0,n) {
		if (a[i] == b[i] && da[i] == db[i]) {
			ans += a[i];
		}
	}
	
	
	
	cout << ans << "\n";

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

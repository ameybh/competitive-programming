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
const int MAXN = 2e5 + 10;

ll t,n,a[MAXN],b[MAXN];


void solution() {
	cin >> n;
	rep(i,0,n) cin >> a[i];
	
	sort(a,a+n);
	int g = 0, u = 0;
	for (int i=0; i<n; i++) {
		if (++u == a[i]) {
			g++;
			u=0;
		}
	}
	cout << g << endl;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	//~cin >> t;	
	//~while(t--) {
		//~solution();
	//~}
	int q;
	cin >> n;
	rep(i,1,n+1) {
		cin >> a[i];
	}
	
	a[0] = 0;
	a[n+1] = a[n];	
	
	rep(i,1,n+1) {
		a[i] += a[i-1];
	}
	
	
	int u,v;
	cin >> q;
	rep(i,0,q) {
		cin >> u >> v;
		//~cout << a[v+1] << " " << a[u] << "\n";
		cout << a[v+1] - a[u] << "\n";
	}
	
	
	return 0;
}


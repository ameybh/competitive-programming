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
#define MAXN 200001

ll t,n,k,a[MAXN],b,c,d,l;
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
	cin >> n >> k;
	rep(i,0,n) cin >> a[i];
	
	vector<int> pos;
	
	rep(i,1,n-1) {
		if (a[i] > a[i-1] && a[i] > a[i+1]) {
			pos.pb(i);
			i++;
		}
	}
	
	//rep(i,0,(int)pos.size()) {
		//cout << pos[i] << " ";
	//}
	//cout << "\n";
	ll left, right, count, mxcnt = 0;
	l = 1;
	
	rep(i,0,n-k+1) {
		left = i;
		right = i+k-1;
		auto leftlower = lower_bound(all(pos), left+1) - pos.begin();
		auto rightlower = lower_bound(all(pos), right) - pos.begin();
		count = rightlower - leftlower;
		//cout << left << " " << right << " " << count << "\n";
		if (count > mxcnt) {
			mxcnt = count;
			l = i+1;
			//cout << leftlower << "  " << rightlower << "\n";
		}
	}
	
	
	//cout << "ans1\n";
	cout << mxcnt+1 << " " << l << "\n";
	/*
	l = 1;
	mxcnt = 0;
	rep(i,0,n-k+1) {
		c = 0;
		rep(j,i+1,i+k-1) {
			if (a[j] > a[j-1] &&  a[j] > a[j+1]) c ++;
		}
		if (c > mxcnt) {
			mxcnt = c;
			l = i+1;
		}
		//cout << "\n";
	}
	*/
	//cout << "ans2\n";
	//cout << mxcnt+1 << " " << l << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: COOK118B-Practice

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
//make sure to change MAXN according to constraints
#define MAXN 100001

const int p = 31;
const int MOD = 1e9 + 9;


ll mul (int a, int b) {
	return 1LL*a*b % MOD;
}

ll diff (int a, int b) {
	a-=b;
	if (a < 0) {
		a+= MOD;
	}
	return a;
}

int n;
string s;
vector<int> h,k;
ll getHash(int l, int r) {
	return diff(k[l], mul(k[r+1], h[r-l+1]));
}

void solution() {
	cin >> s;
	n = s.size();
	h.assign(n+1, 0);
	k.assign(n+1, 0);
	h[0] = 1;
	rep(i,1,n) {
		h[i] = mul(h[i-1],p);
	}
	
	repD(i,n-1,0) {
		k[i] = (mul(k[i+1],p) + (s[i] - 'a')) % MOD;
	}
	
	
	int ans = 0;
	rep(l,2,n) {
		
		int t1_len = l/2;
		int t2_len = (n-l)/2;
		if (getHash(0,t1_len-1) == getHash(t1_len, l-1) && getHash(l, l + t2_len-1) == getHash(l+t2_len, n-1)) {
			ans++;
		}
		l++;
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

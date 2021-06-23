// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/MAY20B
// subtask 1

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
#define mxN 105
#define mxM 20
int t, n, m, a[mxN], b[mxM][2];
void solution() {
	cin >> n >> m;
	
	rep(i,0,n)
		cin >> a[i];
	rep(i,0,m)
		cin >> b[i][0] >> b[i][1];
	int cnt = 0;
	rep(i,0,n) {
		int pos = min_element(a+i,a+n) - a;
		if (pos != i) {
			swap(a[pos], a[i]);
			cnt++;
		}
	}
	cout << cnt << "\n";
		
		
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

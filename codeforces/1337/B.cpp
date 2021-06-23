// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces

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

void solution() {
	//cout << "HelloWorld!\n";
	ll h,n,m;
	cin >> h >> n >> m;
	
	//ll r1 = h/2 + 10;
	if (h > 20) {
		while(h>20 && n>0) {
			h = h/2 + 10;
			n--;
		}
		if (10*m >= h) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		return;
	}
	else if (10*m >=h){
		cout << "YES\n";
		return;
	}
	else {
		cout << "NO\n";
	}
		
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
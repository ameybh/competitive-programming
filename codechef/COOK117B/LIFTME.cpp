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

ll t,n,q;



void solution() {
	ll f,d,curr = 0, dist = 0;
	//cout << "HelloWorld!\n";
	curr = 0;
	dist = 0;
	cin >> n >> q;
	
	rep(i,0,q) {
		cin >> f >> d;
		if (i == 0) {
			if (f<d) {
				dist  += d;
			}
			else {
			
				dist += 2*f - d;
			}
		}
		else if (i == q-1) {
			dist += abs(f-curr);
			dist += abs(f-d);
		}
		else {
			//cout << "ggsd" << curr << "\n";
			dist += abs(f-curr);
			dist += abs(f-d);
		}
		//cout << i << " " << dist << " " << f << " "  <<  d << "\n";
		curr = d;
	}
	
	
	cout << dist << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	//ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}


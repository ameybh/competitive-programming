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
#define MAXN 100001

ll t,n,k;

void solution() {
	cin >> n >> k;
	
	if (k > n) {
		cout << "NO\n";
		return;
	}
	else if (k & 1 && n & 1) {
		
		if (n-k+1 < 1) {
			cout << "NO\n";
			return;
		}
		cout << "YES\n";
		rep(i,0,k-1) {
			cout << 1 << " ";
		}
		cout << n - (k-1) << "\n";
	}
	
	else if (n % 2 == 0) {
		
		if (n - 2*(k-1) < 2) {
			
			if (k%2 == 0) {
				if (n-k+1 < 1) {
					cout << "NO\n";
					return;
				}
				cout << "YES\n";
				rep(i,0,k-1) {
					cout << 1 << " ";
				}
				cout << n-k+1 << "\n";
			}
			else {
				cout << "NO\n";
				return;
			}
			return;
		}
		cout << "YES\n";
		rep(i,0,k-1) {
			cout << 2 << " ";
		}
		cout << n - 2*(k-1) << "\n";
	}
	else {
		cout << "NO\n";
		
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
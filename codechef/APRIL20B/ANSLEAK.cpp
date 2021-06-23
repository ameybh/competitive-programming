// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/APRIL20B
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

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void solution() {
	//cout << "HelloWorld!\n";
	int n,m,k;
	cin >> n >> m >> k;
	int ans[n];
	srand(n*m*k);
	rep(i,0,n) {
		rep(j,0,k) {
			int x;
			cin >> x;
		}
	}
	
	
	rep(i,0,n) {
		ans[i] = rand(1,m);
		cout << ans[i] << " "; 
	}
	cout << "\n";
	
	
	
	//rep(i,0,n) ans[i] = 0;
	//rep(i,0,n) {
		//map<int,int> row;
		//rep(j,0,k) {
			//int x;
			//cin >> x;
			//if (!row[x]) {
				//row[x] = 1;
			//} else {
				//row[x] ++;
			//}
			
		//}
		//ans[i] = row.begin()->first;
	//}
	//rep(i,0,n) cout << ans[i] << " ";
	//cout << "\n";
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

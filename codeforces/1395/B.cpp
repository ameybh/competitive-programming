// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces Round #664 (Div. 2) 

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

int n,m,a,b;
void solution() {
	cin >> n >> m >> a >> b;
	swap(n,m);
	set< pair<int,int> > ss;
	vector< pair<int,int>> vv;
	// cout << a << ' ' << b << '\n';
	vector< vector< bool > > arr(n+1, vector< bool > (m+1, false));
	arr[b][a] = 1;
	int currX = a, currY = b;
	vv.push_back({currX,currY});
	ss.insert(make_pair(currX,currY));
	for (int i=1; i<(n*m); i++) {
		// find unvisited in same col
		int j;
		
		for (j=1; j<=m; j++) {
			if (!arr[currY][j]) {
				break;
			}
		}
		if (j <= m) {
			currX = j;
			arr[currY][currX] = 1;
			// cout << currX << ' ' << currY << '\n';
			vv.push_back({currX,currY});
			
			assert(ss.count(make_pair(currX, currY)) == 0);
			
			ss.insert(make_pair(currX,currY));
			continue;
		}
		// find unvisited in same row
		for (j=1; j<=n; j++) {
			if (!arr[j][currX]) {
				break;
			}
		}
		if (j <= n) {
			currY = j;
			// cout << currX << ' ' << currY << " col\n";
			// cout << currX << ' ' << currY << "\n";
			vv.push_back({currX,currY});
			
			assert(ss.count(make_pair(currX, currY)) == 0);
			
			ss.insert(make_pair(currX,currY));
			arr[currY][currX] = 1;
			continue;
		}
		// for (j=1;j<=n;j++) {
			// for (int k=1;k<=m;k++) {
				// cout << arr[j][k] << ' ';
			// }
			// cout << '\n';
		// }
		// break;	
	}
	
	
	for (auto& e:vv) {
		cout << e.first << ' ' << e.second << '\n';
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	solution();
	return 0;
}
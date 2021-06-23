// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: JULY20B

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

ll modmul(ll a, ll b) {
    return ((a%MOD) * (b%MOD)) % MOD;
}

ll modadd(ll a , ll b){
    return((a%MOD)+(b%MOD)+MOD)%MOD;
}

ll modsub(ll a , ll b){
    return((a%MOD) - (b%MOD) + MOD)%MOD;
}

int n;
vector<vector<char>> board;
void solution() {
	cin >> n;
	board.assign(8, vector<char>(8, 'X'));
	board[0][0] = 'O';
	n--;
	for (int i=0; i<8 && n > 0; i++) {
		if (i == 0) {			
			for (int j=1; j<8 && n > 0; j++) {
				board[i][j] = '.';
				n--;	
			}
			continue;
		}
		for (int j=0; j<8 && n > 0; j++) {
			board[i][j] = '.';
			n--;
		}
	}
	
	for (auto& r:board) {
		for (auto& p:r) {
			cout << p;
		}
		cout << "\n";
	}
	cout << "\n";
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

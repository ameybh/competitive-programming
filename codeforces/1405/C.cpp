// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces Round #668 (Div. 2) 

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
#define MOD 1000000007
int n,k;
string s;
bool eq(char a, char b) {
	if (a == '?' || b == '?') return 1;
	return a == b;
}
void solution() {
	cin >> n >> k;
	cin >> s;
	bool y = 1;
	if (k<n) {
		y = eq(s[0], s[k]);
	}
	for (int i=0; i<n-k; i++) {
		if(eq(s[i], s[i+k])) {
			if (s[i+k] == '?' && s[i] != '?') {
				s[i+k] = s[i];
			}
		} else {
			y = 0;
			break;
		}
	}
	
	
	int o = 0, z = 0;
	for (int i=0; i<k; i++) {
		if (s[i] == '1') o++;
		else if (s[i] == '0') z++;
	}
	y &= (o<=k/2 && z<=k/2);
	for (int i=1; i<n-k+1; i++) {
		if (s[i-1] == '1') o--;
		else if (s[i-1] == '0') z--;
		
		
		if (s[i+k-1] == '1') o++;
		else if(s[i+k-1] == '0') z++;
		y &= (o<=k/2 && z<=k/2);
	}
	cout << (y ? "YES" : "NO") << '\n';
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
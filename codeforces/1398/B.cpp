// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Educational Codeforces Round 93 (Rated for Div. 2) 

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
// int n;
// vector<int> a;
void solution() {
	string s;
	cin >> s;
	// int n = s.size();
	
	int a = 1;
	int cnt = 0, alice = 0;
	for (auto& e:s) {
		if (e == '1') {
			cnt++;
		}
	}
	
	while (cnt > 0 && s.size() > 0) {
		int len = 0, curr = 0;
		for (int i=0; i<(int)s.size(); i++) {
			if (s[i] == '1') curr++;
			else curr = 0;
			len = max(len, curr);
		}
		
		for (int i=0; i+len-1<(int)s.size(); i++) {
			string sub = s.substr(i,len);
			bool y = 1;
			for (int j=0; j<len && y; j++) {
				y&=sub[j]=='1';
			}
			if (y) {
				if (a) {
					alice += len;
					// cout << len << '\n';
				}
				cnt-=len;
				s.erase(s.begin()+i,s.begin()+i+len);
				break;
			}
		}
		a = 1-a;
	}
	cout << alice << '\n';
	// cin >> n;
	// a.resize(n);
	// for (auto& e:a) {
		// cin >> e;
	// }
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
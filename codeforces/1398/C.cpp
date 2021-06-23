// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Educational Codeforces Round 93 (Rated for Div. 2) 
// #pragma GCC optimize ("trapv")
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
int n;
string s;
void solution() {
	cin >> n;
	cin >> s;
	set< pair<int, int> > ss;
	for (int i=0; i<n; i++) {
		if (s[i] == '0') continue;
		int sm = 0, p = i;
		while (p < n && (sm <= p-i+1 || p-i+5 <= (s[i]-'0'))) {
			// cout << s[i] << ':' << s[p] << '\n';
			sm += (s[p]-'0');
			if (sm == p-i+1) {
				pair<int,int> p1 = make_pair(i,p);
				if (ss.count(p1) == 0) {
					ss.insert(p1);
				}
			}
			p++;
		}
	}
	for (int i=n-1; i>=0; i--) {
		if (s[i] == '0') continue;
		int sm = 0, p = i;
		while (p >= 0 && (sm <= i-p+1 || i-p+5 <= (s[i]-'0'))) {
			sm += (s[p]-'0');
			if (sm == i-p+1) {
				pair<int,int> p1 = make_pair(p,i);
				// cout << p1.first << ' ' << p1.second << '\n';
				if (ss.count(p1) == 0) {
					ss.insert(p1);
				}
			}
			p--;
		}
	}
	
	// for (auto& e:ss) {
		// cout << e.first << ' ' << e.second << '\n';
	// }
	
	cout << (ll)ss.size() << '\n';
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
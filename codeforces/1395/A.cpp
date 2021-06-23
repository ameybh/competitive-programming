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


bool palin(vector<int>&a) {
	int ev = 0, o = 0;
	for (auto& e:a) {
		if (e&1) o++;
		else ev++;
	}
	
	if (o > 1) return false;
	return true;
	
}

int n;
vector<int> a;

void solution() {
	n = 4;
	a.resize(n);
	for (auto& e:a) {
		cin >> e;
	}
	int k  = 0;
	while (!palin(a) && k < 5) {
		++k;
		for (int i=0; i<3; i++) {
			if (a[i] == 0) {
				// cout << a[i] << ' ';
				cout << "No\n";
				return;
			}
			a[i] -= 1;
			a[3] += 1;
		}
	}
	
	if (palin(a)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	
	// cout << "Yes\n";
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
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

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
#define MAXN 1000005

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


vector <int> prime;
bool is_composite[MAXN];

void sieve (int n) {
	std::fill (is_composite, is_composite + n, false);
	for (int i = 2; i < n; ++i) {
		if (!is_composite[i]) prime.push_back (i);
		for (int j = 2; i * j < n; ++j)
			is_composite[i * j] = true;
	}
}

int n;
// vector<int> a;
void solution() {
	cin >> n;
	
	cout << __gcd(n/2,(n/2)*2) << "\n";
	
	
	// int mx = 1;
	// int a = 0, b = 0;
	// rep(i,1,n+1) {
		// rep(j,i+1,n+1) {
			// if (__gcd(i,j) >= mx) {
				// a = i;
				// b = j;
				// mx = max(mx, __gcd(i,j));
			// }
		// }
	// }
	// cout << mx << " " << a <<  " " << b << "\n";
	
	
	// int it = -1;
	// while (prime[it+1]*2 <= n) {
		// it++;
	// }
	// cout << prime[it] << "\n";
	
	
}

int main() {
	sieve(1000000);
	prime.insert(prime.begin(),1);
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
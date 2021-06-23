// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: JUNE20B

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

//~int n;
//~vector<int> a;
ll n;
void solution() {
	cin >> n;
	ll ans = 0;
	if (n&1) {
		ans = (n-1)/2;
		cout << ans << "\n";
		return;
	}
	
	if (!(n&(n-1))) {
		//~power of 2
		
		cout << ans << "\n";
		return;
	}
	
	//~count factors of two
	ll cnt = 0, tmp = n;
	while (tmp % 2 == 0) {
		cnt++;
		tmp = tmp >> 1;
	}
	
	ans = n / (1<<(cnt+1));
	
	//~tmp = 1 << (cnt+1);
	//~while (tmp <= n ) {
		//~tmp = tmp << 1;
		//~ans++;
	//~}
	
	cout << ans << "\n";
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

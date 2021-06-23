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

int s,n;
// vector<int> a;
void solution() {
	cin >> s >> n;
	// a.assign(n, 0);
	int ans = 0;
	int val = n;
	if (s <= n) {
		if (s % 2 == 0) {
			cout << 1 << "\n";
			return;
		}
		else {
			if (s == 1) {
				cout << 1 << "\n";
			}
			else {
				cout << 2 << "\n";
			}
		}
		return;
	}
	if (s&1) {
		s--;
		ans ++;
	}
	while (s > n) {
		ans+=(s/val);
		s -= (s/val)*val;
		val-=2;
	}
	if (s == 0) {
		cout << ans << "\n";
		return;
	}
	if (s <= n) {
		if (s % 2 == 0) {
			cout << ans+1 << "\n";
			return;
		}
		else {
			if (s == 1) {
				cout << ans+1 << "\n";
			}
			else {
				cout << ans+2 << "\n";
			}
		}
		return;
	}
	
	
	cout << ans << "\n";
	// cout << ceil((double)s/n) + s%n << "\n";
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

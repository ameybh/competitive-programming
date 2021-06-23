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

int n;
vector<int> a;
void solution() {
	cin >> n;
	a.assign(n, 0);
	for (auto& e : a)
		cin >> e;
	map<int,int> c;
	
	for (auto& e : a) {
		if (e == 5) {
			c[e]++;
		}
		else if (e == 10) {
			if (c[5] > 0) {
				c[5]--;
				c[e]++;
			}
			else {
				cout << "NO\n";
				return;
			}
		}
		else if (e == 15) {
			if (c[10] > 0) {
				c[10]--;
				c[e]++;
			}
			else if (c[5] > 1) {
				c[5]-=2;
				c[e]++;
			}
			else {
				cout << "NO\n";
				return;
			}
		}
	}
	
	cout << "YES\n";
	
	
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

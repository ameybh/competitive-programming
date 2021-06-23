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

int n,k;
vector<int> a;
void solution() {
	cin >> n >> k;
	a.assign(n,0);
	
	for (auto& x : a) {
		cin >> x;
	}
	
	vector<vector<int>> p(k);
	rep(i,0,n) {
		p[i%k].pb(a[i]);
	}
	
	
	rep(i,0,k) {
		sort(all(p[i]));
		//~for (auto el : p[i])
			//~cout << el <<  " ";
		//~cout << "\n";
	}

	
	vector<int> f;
	while ((int) f.size() != n) {
		rep(i,0,k) {
			if ((int) p[i].size() > 0) {
				f.pb(*p[i].begin());
				p[i].erase(p[i].begin());
			}
		}
	}
	
	//~rep(i,0,n)
		//~cout << f[i] << " ";
	
	bool s = true;
	rep(i,1,n) {
		s &= f[i-1] <= f[i];
		if (!s) {
			cout << "no\n";
			return;
		}
	}
	cout << "yes\n";
	return;
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

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

int n;
vector<int> a;
void solution() {
	cin >> n;
	a.assign(n, 0);
	map<int,int,greater<int>> data;
	for(auto& e:a) {
		cin >> e;
		data[e]++;
	}
	
	bool l3 = true;
	for (auto& e:data) {
		if (e.second >=3) {
			l3 = 0;
			break;
		}
	}
	if (!l3) {
		cout << "NO\n";
		return;
	}
	
	
	bool first = true;
	bool left = true;
	vector<int> l,r;
	for (auto& e:data) {
		if (first) {
			if (e.second > 1) {
				cout << "NO\n";
				return;
			}
			while (e.second > 0) {
				if (left) {
					l.pb(e.first);
					left = 0;
				}
				else {
					r.pb(e.first);
					left = 1;
				}
				data[e.first]--;
			}
			
			first = false;
		}
		else {
			while (e.second > 0) {
				if (left) {
					l.pb(e.first);
					left = 0;
				}
				else {
					r.pb(e.first);
					left = 1;
				}
				data[e.first]--;
			}
			
		}
	}
	
	reverse(all(l));
	cout << "YES\n";
	for (auto& e:l)
		cout << e << " ";
	for (auto& e:r)
		cout << e << " ";
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

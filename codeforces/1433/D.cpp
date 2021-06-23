// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 20.10.2020 19:57:54 IST
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
class DSU {
	int n;
	vector< int > parent;
	vector< int > size;
	public:
	int nCC;
	DSU (int len) {
		n = len;
		init();
		nCC = n;
	}
	void init () {
		size.assign(n, 1);
		parent.resize(n);
		for (int i=0; i<n; i++) {
			parent[i] = i;
		}
	}
	int find_set (int v) {
		if (v == parent[v]) return v;
		return parent[v] = find_set(parent[v]);
	}
	void union_sets (int a, int b) {
		a = find_set(a);
		b = find_set(b);
		if (a != b) {
			if (size[a] < size[b]) swap(a,b);
			parent[b] = a;
			size[a] += size[b];
			--nCC;
		}
	}
};

void solve() {
	int n;
	cin >> n;
	DSU d1(n);
	vector< int > a(n); for(auto&e:a) cin >> e;
	vector< pair< int,int> > ed;
	rep(i,0,n) {
		if (d1.nCC == 1 || (int)ed.size() == n-1) break;
		rep(j,i+1,n) {
			if (a[i] == a[j]) continue;
			if (d1.nCC == 1 || (int)ed.size() == n-1) break;
			if (d1.find_set(i) == d1.find_set(j)) {
				continue;
			}
			d1.union_sets(i,j);
			ed.pb({i,j});
		}
	}
	
	if (d1.nCC == 1 && (int) ed.size() == n-1) {
		cout << "YES\n";
		for (auto& e:ed) {
			cout << e.first+1 << ' ' << e.second+1 << '\n';
			assert(a[e.first] != a[e.second]);
		}
	} else {
		cout << "NO\n";
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
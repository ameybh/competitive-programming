// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
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


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector< int > roads;
	DSU d(n);
	rep(i,0,m) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;
		d.union_sets(u,v);
	}
	unordered_set< int > parents;
	rep(i,0,n) {
		parents.insert(d.find_set(i));
	}
	for (auto& e:parents) roads.pb(e);
	cout << (int)roads.size()-1 << '\n';
	rep(i,1,(int)roads.size()) {
		cout << roads[i]+1 << ' ' << roads[i-1]+1 << '\n';
	}
	return 0;
}

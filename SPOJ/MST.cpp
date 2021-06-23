// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany 1.36 on Ubuntu 20.04
// Contest/Platform: Codechef October Challenge 2020
// Date: 12.10.2020 22:39:33 IST
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
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
int n, m;
vector< pair< int, pair < int, int > > > ed;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);	
	cin >> n >> m;
	ed.resize(m);
	for (auto& e:ed) {
		cin >> e.second.first >> e.second.second >> e.first;
		--e.second.first;
		--e.second.second;
	}
	sort(ed.begin(), ed.end());
	DSU d1(n);
	ll ans = 0;
	for (int i=0; i<m; i++) {
		int x = d1.find_set(ed[i].second.first);
		int y = d1.find_set(ed[i].second.second);
		if (x == y) continue;
		ans += ed[i].first;
		d1.union_sets(x, y);
	}
	cout << ans;
	return 0;
}

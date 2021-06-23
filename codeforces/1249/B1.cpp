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
	public:
	int n;
	vector< int > parent;
	vector< int > size;
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
	DSU d(n);
	rep(i,0,n) {
		int x;
		cin >> x;
		--x;
		d.union_sets(i,x);
	}
	
	rep(i,0,n) {
		cout << d.size[d.find_set(i)] << ' ';
	}
	
	cout << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
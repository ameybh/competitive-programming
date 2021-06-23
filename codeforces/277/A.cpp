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

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	DSU g(n);
	vector< vector< bool > > emp(n, vector< bool >(m, false));
	bool k_zero = true;
	rep(i,0,n) {
		int k;
		cin >> k;
		k_zero &= k == 0;
		rep(j,0,k) {
			int l;
			cin >> l;
			--l;
			emp[i][l] = true;
		}
	}
	if (k_zero) {
		cout << n << '\n';
		return 0;
	}
	rep(i,0,n) {
		rep(j,i+1,n) {
			rep(k,0,m) {
				if (emp[i][k] && emp[j][k]) {
					g.union_sets(i,j);
					break;
				}
			}
		}
	}
	cout << g.nCC-1 << '\n';
	return 0;
}
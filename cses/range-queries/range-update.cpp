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
template <class T>
class FenwickTree {
	public:
	int n;
	vector< T > bit;
	FenwickTree (int len) {
		n = len;
		bit.assign(n,0);
	}
	FenwickTree (vector< T > a) : FenwickTree(a.size()) {
		for (size_t i=0; i<a.size(); i++) {
			add(i, a[i]);
		}
	}
	T sum (int r) {
		T ret = 0;
		for (; r >= 0; r = (r & (r+1))-1)
			ret += bit[r];
		return ret;
	}
	T sum(int l, int r) {
		return sum(r) - sum(l-1);
	}
	void add(int idx, T delta) {
		for (; idx < n; idx = (idx | (idx + 1)))
			bit[idx] += delta;
	}
	void range_update(int l, int r, T val) {
		add(l, val);
		add(r+1, -1*val);
	}
};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int N, Q;
	cin >> N >> Q;
	vector< ll > A(N);
	for (auto& e:A) cin >> e;
	FenwickTree< ll > f(N);
	rep(i,0,N) {
		f.add(i, A[i]);
		f.add(i+1, -1*A[i]);
	}
	rep(i,0,Q) {
		int q;
		cin >> q;
		if (q == 1) {
			// update
			int a, b, u;
			cin >> a >> b >> u;	
			--a; --b;
			f.range_update(a, b, u);
		} else {
			// query
			int k;
			cin >> k;
			--k;
			cout << f.sum(k) << '\n';
		}
	}
	return 0;
}


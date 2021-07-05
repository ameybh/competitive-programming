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

// my first segment tree solution, yay!

const int MAXN = 2e5 + 10;

template <class T>
class SegTree {
	public:
	int n;
	vector< T > t;
	SegTree(int len, vector< T >& vals) {
		n = len;
		t.resize(4*n);
		build(vals, 1, 0, n-1);
	}
	void build (vector< T >& vals, int v, int tl, int tr) {
		if (tl == tr) {
			t[v] = vals[tl];
		} else {
			int tm = tl + (tr - tl)/2;
			build(vals, v*2, tl, tm);
			build(vals, v*2+1, tm+1, tr);
			// merge function here
			t[v] = t[v*2] + t[v*2+1];
		}
	}
	T sum(int v, int tl, int tr, int l, int r) {
		// cout << tl << ' ' << tr << '\n';
		if (l > r) return 0;
		if (l == tl && r == tr) return t[v];
		int tm = tl + (tr-tl)/2;
		 return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
	}
	void update(int v, int tl, int tr, int pos, T new_val) {
		if (tl == tr) t[v] = new_val;
		else {
			int tm = tl + (tr-tl)/2;
			if (pos <= tm)
				update(v*2, tl, tm, pos, new_val);
			else
				update(v*2+1, tm+1, tr, pos, new_val);
			t[v] = t[v*2] + t[v*2+1];
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int N, Q;
	cin >> N >> Q;
	vector< ll > A(N);
	for (auto& e:A) cin >> e;
	
	SegTree<ll> s(N, A);
	// rep(i,0,4*N) cout << s.t[i] << ' ';
	// cout << '\n';
	rep(i,0,Q) {
		int q;
		cin >> q;
		if (q == 1) {
			int P, V;
			cin >> P >> V;
			s.update(1, 0, N-1, P-1, V);
		} else {
			int L, R;
			cin >> L >> R;
			--L;
			--R;
			cout << s.sum(1,0,N-1,L,R) << '\n';
		}
	}	
	return 0;
}

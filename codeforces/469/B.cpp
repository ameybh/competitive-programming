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

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int p, q, l, r;
	cin >> p >> q >> l >> r;
	vector< pair<int,int> > a(p), b(q);
	for (auto& [start, end]: a) {
		cin >> start >> end;
	}
	for (auto& [start, end]: b) {
		cin >> start >> end;
	}
	auto inter = [&] (pair< int, int > x, pair<int, int > y) -> bool {
		if (x.first > y.first) swap(x, y);
		return (x.first == y.first || x.second >= y.first);
	};
	auto intersects = [&](int shift) -> bool {
		rep(i,0,p) {
			rep(j,0,q) {
				// check if ith and jth segment intersect
				b[j].first += shift;
				b[j].second += shift;
				if (inter(a[i], b[j])) {
					b[j].first -= shift;
					b[j].second -= shift;
					return true;
				}
				b[j].first -= shift;
				b[j].second -= shift;
			}
		}
		return false;
	};
	int ans = 0;
	rep(i,l,r+1) {
		if (intersects(i)) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
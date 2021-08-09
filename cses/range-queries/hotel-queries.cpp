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
	int n, m;
	cin >> n >> m;
	set< pair< int,int> > h;
	vector< int > r(m);
	rep(i,0,n) {
		int x;
		cin >> x;
		h.insert({x, i+1});
	}
	rep(i,0,m) cin >> r[i];
	vector< int > ans(m);
	rep(i,0,m) {
		auto it = h.lower_bound({r[i],0});
		if (it == h.end()) {
			ans[i] = 0;
			continue;
		}
		pair<int,int> val = *it;
		cout << r[i] << ' ';
		for (auto& [key,x]:h) {
			cout << '{' << key << ':' << x << "} ";
		}
		cout << '\n';
		pair<int,int> new_val = val;
		ans[i] = val.second;
		new_val.first -= r[i];
		h.erase(val);
		if (new_val.first > 0)
			h.insert(new_val);
		
	}
	rep(i,0,m) cout << ans[i] << ' ';
	
	return 0;
}

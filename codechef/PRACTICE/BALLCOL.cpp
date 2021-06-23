// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany 1.36 on Ubuntu 20.04
#pragma GCC optimize ("trapv")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve() {
	int n, m;
	cin >> n >> m;
	unordered_map< ll, pair< ll, ll>, custom_hash> mp;
	for (int i=0; i<n; i++) {
		ll x, v;
		cin >> x >> v;
		ll p = x*v;
		if (mp.count(p)) {
			mp[p].first++;
		} else {
			mp[p] = make_pair(1,0);
		}
	}	
	for (int i=0; i<m; i++) {
		ll y, v;
		cin >> y >> v;
		ll p = y*v;
		if (mp.count(p)) {
			mp[p].second++;
		} else {
			mp[p] = make_pair(0,1);
		}		
	}
	
	ll ans = 0;
	for (auto& e:mp) {
		ans += min(e.second.first, e.second.second);
	}
	cout << ans << '\n';
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	solve();
	return 0;
}

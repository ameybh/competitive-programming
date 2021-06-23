#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned ll
vector<vector<int>> adj;
bool isprime(int x) {
	bool p = 1;
	for (int i=2; i*i<=x&&p; i++) {
		p &= x%i!=0;
	}
	return p;
}
int main() {
	int n,u,v;
	vector<int> primes = {2};
	for (int i=3; i<100; i+=2)
		if (isprime(i))
			primes.push_back(i);
	ll lim = 2e18;
	multiset <ll> pt;
	for (auto& e:primes) pt.insert(e);
	while (pt.size() > 2) {
		ll a = *pt.begin();
		pt.erase(pt.begin());
		auto it = pt.upper_bound(lim/a);
		it--;
		ll b = *it;
		pt.erase(it);
		pt.insert(a*b);
	}
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		adj.assign(n,vector<int>());
		vector<int> d(n,-1);
		for (int i=0; i<n-1; i++) {
			cin >> u >> v;
			--u;--v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<int> q = {0};
		for (int i=0; i<(int) q.size(); i++) {
			int at = q[i];
			for (auto& nb : adj[at]) {
				if (d[nb] == -1) {
					d[nb] = d[at] + 1;
					q.push_back(nb);
				}
			}
		}
		for (int i=0; i<n; i++) {
			cout << (d[i]%2==0 ? *pt.begin() : *pt.rbegin()) << " ";
		}
		cout << "\n";
	}	
	return 0;
}

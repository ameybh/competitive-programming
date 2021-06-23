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
	
	vector< int > pos;
	string a, b;
	cin >> a >> b;
	int n = b.size();
	vector< pair< int, int > > q;
	q.pb({0, 0});
	rep(i,0,(int)q.size()) {
		if (q[i].ff == n) {
			pos.pb(q[i].ss);
			continue;
		}
		if (b[q[i].ff] == '?') {
			q.pb({q[i].ff+1,q[i].ss-1});
			q.pb({q[i].ff+1,q[i].ss+1});
		} else {
			if (b[q[i].ff] == '+') {
				q.pb({q[i].ff+1,q[i].ss+1});
			} else {
				q.pb({q[i].ff+1,q[i].ss-1});
			}
		}
	}
	int curr = 0;
	for (auto& e:a) {
		if (e == '+') curr++;
		else curr--;
	}
	cout << fixed << setprecision(12);
	int cnt = count_if(all(pos), [&](int x) {return x == curr;});
	if (cnt) {
		cout << cnt/(double)pos.size() << '\n';
	} else {
		cout << 0 << '\n';
	}
	
	return 0;
}
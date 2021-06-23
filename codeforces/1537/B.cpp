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
ll n, m, ax, ay;
ll dis (ll x1, ll y1, ll x2, ll y2) {
	ll len = 0;
	len += abs(x1-ax) + abs(y1-ay);
	len += abs(x2-x1) + abs(y2-y1);
	len += abs(x2-ax) + abs(y2-ay);
	return len;
}
void solve() {
	cin >> n >> m >> ax >> ay;
	ll maxDis = 0;
	pair<int,int> p1, p2;
	for (ll x1 : {1LL, n}) {
		for (ll y1: {1LL, m}) {
			for (ll x2: {1LL, n}) {
				for (ll y2: {1LL, m}) {
					ll disCurr = dis(x1, y1, x2, y2);
					if (disCurr >= maxDis) {
						maxDis = disCurr;
						p1.ff = x1;
						p1.ss = y1;
						p2.ff = x2;
						p2.ss = y2;
					}
				}
			}
		}
	}
	// cout << maxDis << ' ';
	cout << p1.ff << ' ' << p1.ss << ' ' << p2.ff << ' ' << p2.ss << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
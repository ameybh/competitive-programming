// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma optimize ("trapv")
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
ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}
vector< ll > r, pr;
void solve() {
	ll L, R;
	cin >> L >> R;
	/*
	 * output product of r[L]^(summation of r[L+1 ... R]) mod 1e9 + 7
	 */
	ll s = pr[R]-pr[L];
	cout << fe(r[L],s) << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	/*generate a number that is:
	 * 1. odd
	 * 2. palindrome
	 */
	string p = "1";
	r.pb(0);
	pr.pb(0);
	int lim = 1e5 + 10;
	for (int i=1; (int)r.size() < lim; i++) {
		string left = to_string(i);
		string right = left;
		reverse(all(right));
		right.erase(right.begin());
		p = left + right;
		r.pb(stol(p));
		pr.pb(r[(int)r.size()-1]);
	}
	rep(i,1,(int)pr.size()) {
		pr[i] += pr[i-1];
	}
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

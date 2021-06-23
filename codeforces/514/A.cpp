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
	string s;
	cin >> s;
	rep(i,0,(int)s.size()) {
		int e = s[i];
		if (i == 0 && e == '9') {
			continue;
		}
		if (e > '4') {
			e = '9'-e + '0';
		}
		s[i] = e;
	}
	ll ans = 0;
	for (auto& e:s) {
		ans *= 10;
		ans += e-'0';
	}
	cout << ans << '\n';
	return 0;
}
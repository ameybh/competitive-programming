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
	string s;
	cin >> s;
	int n = s.size();
	if (n < 4) {
		cout << 0;
		return 0;
	}
	// bearaabearc
	int ans = 0;
	rep(l,0,n) {
		rep(r,l,n-3) {
			if (s.substr(r, 4) == "bear") {
				ans += n-r-3;
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
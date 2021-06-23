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
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }

bool palin(string& s) {
	bool p = 1;
	rep(i,0,(int)s.size()/2 + 1) {
		p &= s[i] == s[(int)s.size()-i-1];
	}
	return p;
}
int can_be_palin(string& s) {
	// assuming s is !palin
	int z = 0;
	
	rep(i,0,(int)s.size()/2) {
		z += (s[i] != s[(int)s.size()-i-1]);
	}
	// cout << z << ' ';
	return z;
}
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int zero = count_if(all(s), [](char x) {return x == '0';});
	if (palin(s)) {
		// solution of B1 applies here
		if (s[n/2] == '0' && zero&1 && zero > 1) {
			cout << "ALICE\n";
			return;
		}
		cout << "BOB\n";
		return;
	}
	int cnt = can_be_palin(s);
	if (cnt & 1) {
		if (zero & 1) {
			cout << "ALICE\n";
			return;
		} else {
			cout << "DRAW\n";
			return;
		}
	} else {
		cout << "ALICE\n";
	}

	
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
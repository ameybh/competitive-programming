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
void solve() {
	int n;
	cin >> n;
	vector< int > pos;
	rep(i,0,n) {
		char x;
		cin >> x;
		if (x == '*') {
			pos.pb(i);
		}
	}
	// for (auto& e:pos) cout << e << ' ';
	// cerr << '\n';
	
	if ((int)pos.size() < 2) {
		cout << 0 << '\n';
		return;
	}
	
	
	int med = pos[(int)pos.size()/2];
	int medIndex = (int)pos.size()/2;
	// while (medIndex >=0 && pos[medIndex-1]+1 == pos[medIndex])
		// medIndex--;
	ll ans = 0, lp = pos[medIndex];
	for (int i=medIndex-1; i>=0; i--) {
		ans += (lp - pos[i] - 1);
		lp--;
	}
	ll rp = pos[medIndex];
	for (int i=medIndex+1; i<(int)pos.size(); i++) {
		ans += (pos[i]-rp-1);
		rp++;
	}
	cout << ans << '\n';
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
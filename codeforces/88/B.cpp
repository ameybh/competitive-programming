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

bool pos (int x1, int y1, int x2, int y2, int dis) {
	return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) <= (dis*dis);
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	vector< vector< pair<int, int> > > chars(26);
	int n, m, x;
	cin >> n >> m >> x;
	vector< pair< int , int > > shifts;
	rep(i,0,n) {
		string s;
		cin >> s;
		rep(j,0,m) {
			if (s[j] == 'S') {
				shifts.pb({i,j});
			} else {
				chars[s[j]-'a'].pb({i,j});
			}
		}
	}
	int q;
	cin >> q;
	string qs;
	cin >> qs;
	int ans = 0;
	
	vector< bool > upper_ok(26, true);
	rep(i,0,26) {
		char key = 'a' + i;
		bool go = 0;
		for (auto& [p,z]:chars[key-'a']) {
			for (auto& [u,v]:shifts) {
				go |= pos(p,z,u,v,x);
			}
		}
		if (!go) {
			upper_ok[i] = false;
		}
	}
	
	for (auto& e:qs) {
		char key = tolower(e); 
		if (chars[key-'a'].empty() || (key != e && shifts.empty())) {
			ans = -1;
			break;
		}
		if (islower(e)) {
			continue;
		}
		ans += !upper_ok[key-'a'];
	}
	cout << ans << '\n';
	return 0;
}
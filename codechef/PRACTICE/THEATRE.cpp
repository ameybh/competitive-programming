#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll profit = 0;
void sol() {
	ll n,cnt=0;cin >> n;
	map< pair< char,int >, int > s;
	for (int i=0; i<n; i++) {
		char x; int v;
		cin >> x;
		cin.ignore();
		cin >> v;
		s[make_pair(x,v)]++;
	}
	
	vector<bool> vstt (4,0);
	vector<bool> vsts (4,0);
	
	ll f = 100, ans = 0;
	for (int i=0; i<4; i++) {
		int mxVal = 0, time = 0;
		char show = 'Z';
		for (auto &e:s) {
			if (!vsts[e.first.first-'A'] && !vstt[e.first.second/3-1] && e.second > mxVal) {
				mxVal = e.second;
				show = e.first.first;
				time = e.first.second;
			}
		}
		if (show != 'Z') {
			vsts[show-'A'] = 1;
			vstt[time/3-1] = 1;
			ans += f*mxVal;
			f -= 25;
			if (f < 0) {
				break;
			}
			cnt++;
		} else {
			break;
		}
	}	
	ans -= (4-cnt)*100;
	cout << ans << "\n";
	profit += ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	cout << profit << "\n";
	return 0;
}


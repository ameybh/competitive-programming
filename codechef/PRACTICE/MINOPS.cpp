#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		string s,r;
		cin >>s >> r;
		int n = s.size();
		vector<int> gaps;
		int l = 0, k = 0, gap = 0;
		bool f = 0;
		for (int i=0;i<n; i++) {
			if (s[i] != r[i]) {
				l++;
				if (!f) k++;
				f = 1;
				
				if (gap > 0) {
					k++;
					gaps.push_back(gap);
					gap = 0;
				}
				
			}
			else if (f) {
				gap++;
			}
		}
		
		sort(gaps.begin(), gaps.end());
		ll ans = l*k;
		
		for (auto x : gaps) {
			k--;
			l+=x;
			ans = min(ans, (ll)l*k);
		}
		
		cout << ans << "\n";
		
		
		
	}
	
	return 0;
}

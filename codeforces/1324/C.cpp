#include <bits/stdc++.h>
using namespace std;

void s() {
	string s;
	cin >> s;
	int n = s.size();
	vector<int> pos = {0,n+1};
	for (int i=0; i<n; i++) {
		if (s[i] == 'R') {
			pos.push_back(i+1);
		}
	}
	sort(pos.begin(),pos.end());
	int ans = 0;
	for (int i=0; i<(int) pos.size()-1; i++) {
		ans = max(ans, pos[i+1]-pos[i]);
	}
	cout << ans << "\n";
		
		
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		s();
	}
	return 0;
}
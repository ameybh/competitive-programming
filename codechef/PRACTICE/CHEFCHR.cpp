#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
	string s;
	cin >> s;
	int cnt = 0, n = s.size();
	for (int i=0; i+3<n; i++) {
		int c=0,h=0,e=0,f=0;
		for (int j=i;j<i+4;j++) {
			if (s[j] == 'c') c++;
			if (s[j] == 'h') h++;
			if (s[j] == 'e') e++;
			if (s[j] == 'f') f++;
		}
		if (c == 1 && h == 1 && e == 1 && f == 1) {
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "normal\n";
		return;
	}
	
	cout << "lovely " << cnt << '\n';
	
	
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

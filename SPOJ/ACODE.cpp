#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	string s;
	vector< ll > dp (5010, 0);
	while (cin >> s && s[0] != '0') {
		int n = s.size();
		dp[0] = dp[1] = 1;
		for (int i=2; i<=n; i++) {
			dp[i] = 0;
			int d1 = s[i-2] - '0', d2 = s[i-1] - '0';
			if (d1 == 1 || (d1 == 2 && d2 <= 6)) dp[i] += dp[i-2];
			if (d2 != 0) dp[i] += dp[i-1];
		}
		cout << dp[n] << '\n';
	}
	return 0;
}

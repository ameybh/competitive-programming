#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int a,b;
	cin >> a >> b;
	int ans = abs(a-b);
	if (ans  == 9)
		ans--;
	else
		ans++;
	cout << ans << "\n";
	return 0;
}

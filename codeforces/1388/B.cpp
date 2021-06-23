#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
	int n;
	cin >> n;
	int c8 = (n+3)/4;
	string s = "";
	for (int i=0; i<c8; i++)
		s+='8';
	for (int i=0; i<n-c8;i++)
		s+='9';
	reverse(s.begin(),s.end());
	cout << s << '\n';
		
}
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
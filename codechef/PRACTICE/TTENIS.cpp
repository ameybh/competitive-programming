#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		int a = 0, b = 0;
		for (int i=0; i<n;i++) {
			if (s[i]-'0') {
				a++;
			}
			else {
				b++;
			}
		}
		if (a > b && (b < 10 || a-b >=2))
			cout << "WIN\n";
		else
			cout << "LOSE\n";
	}
	return 0;
}


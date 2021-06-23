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
		if (n < 2) {
		    cout << "NO\n";
		    continue;
		}
		map<char,int> mp;
		bool alt = true;
		char c1 = s[0];
		char c2 = s[1];
		if (c1 == c2) {
		    cout << "NO\n";
		    continue;
		}
		for (int i=2; i<n; i++) {
			if (i%2 == 0) {
			    alt &= c1 == s[i];
			}
			else {
			    alt &= c2 == s[i];
			}
		}
		
		if (alt)
			cout << "YES\n";
		else
			cout << "NO\n";
		
		
		
		
	}
	return 0;
}


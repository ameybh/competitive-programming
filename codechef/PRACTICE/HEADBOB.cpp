#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		map<char,int> mp;
		for (int i=0; i<(int)s.size();i++) {
			mp[s[i]]++;
		}
		if (mp['Y'] > 0 && mp['I'] == 0) {
			cout << "NOT INDIAN\n";
			continue;
		}
		else if (mp['Y'] == 0 && mp['I'] > 0) {
			cout << "INDIAN\n";
			continue;
		}
		
		cout << "NOT SURE\n";
		
		
		
	}
	return 0;
}


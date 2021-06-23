#include <bits/stdc++.h>
using namespace std;

void s() {
	int n;
		cin >> n;
		vector<int> a(n);
		
		map<int,int> mp;
		
		for (auto& e:a) {
			cin >> e;
			mp[e]++;
		}
		
		for (auto& e:mp) {
			if (e.second >= 3) {
				cout << "YES\n";
				return;
			}
		}
		
		for (auto& e:mp) {
			if (e.second >= 2) {
				int pos1 = find(a.begin(),a.end(),e.first) - a.begin();
				if (a[pos1] != a[pos1+1]) {
					cout << "YES\n";
					return;
				}
			}
		}
		
		
		cout << "NO\n";
		
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		s();
	}
	return 0;
}
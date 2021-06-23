#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int q,n;
int main() {
	cin >> q;
	stack< int > s;
	for (int i=0; i<q; i++) {
		int a;
		cin >> a;
		if (a == -1) {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			} else {
				cout << "kuchbhi?\n";
			}
		} else {
			cin >> n;
			s.push(n);
		}
	}
	
	return 0;
}

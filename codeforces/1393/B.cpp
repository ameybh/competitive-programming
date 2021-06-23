// Author: Amey Bhavsar (ameybhavsar24@github)
// IDE: Geany/Ubuntu
// Contest/Platform: Practice
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main() {
	int n,q;
	cin >> n;
	map< int, int > mp1;
	mp1[1] = 0;
	mp1[2] = 0;
	for (int i=0; i<n; i++) {
		int p; cin >> p;
		if (mp1.find(p) == mp1.end()) mp1[p] = 1;
		else mp1[p]++;
	}
	cin >> q;
	for (int i=0; i<q; i++)  {
		char x;
		int p;
		cin >> x >> p;
		if (x == '+') {
			if (mp1.find(p) == mp1.end()) mp1[p] = 1;
			else mp1[p]++;
		} else {
			mp1[p]--;
		}
		
		int a = max(mp1[1],mp1[2]), b = min(mp1[1],mp1[2]);
		bool rec = 0, sq = 0;
		if (a > 3) {
			a -= 4;
			sq = 1;
		} else if (b > 3) {
			b -= 4;
			sq = 1;
		}
		if (a > 1) {
			if (a > 3) {
				a -= 4;
				rec = 1;
			}
			else if (b > 1) {
				a-= 2;
				b-=2;
				rec = 1;
			}
		}
		if (b > 1) {
			if (b > 3) {
				b -= 4;
				rec = 1;
			}
			else if (a > 1) {
				a-= 2;
				b-=2;
				rec = 1;
			}
		}
		cout << (rec && sq ? "YES" : "NO") << '\n';
	}
	return 0;
}
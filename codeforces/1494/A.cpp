// Author: Amey Bhavsar - AB - ameybhavsar24@github
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007

bool check(string s) {
	bool valid = 1;
	int c = 0;
	for (auto& e:s) {
		if (e == '(') {
			c++;
		} else {
			if (c == 0) {
				return false;
			} else {
				--c;
			}
		}
	}
	
	return c == 0;
	
}
vector< char > h = {'A', 'B', 'C'};
void solve() {
	string s;
	cin >> s;
	int n = s.size();
	for (int z=0; z<2; z++) {
		for (int j=0; j<2; j++) {
			for (int k=0; k<2; k++)
			 {
				 string ns = s;
				 for (int i=0; i<n; i++) {
					switch(ns[i]) {
						case 'A': 
							if (z == 0) ns[i] = '('; 
							else ns[i] = ')';
							break;
						case 'B':
							if (j == 0) ns[i] = '('; 
							else ns[i] = ')';
							break;
						case 'C':
							if (k == 0) ns[i] = '('; 
							else ns[i] = ')';
							break;
					}
				 }
				 if (check(ns)) {
					 cout << "YES\n";
					 return;
				 }
			 }
		}
	}
	
	cout << "NO\n";
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
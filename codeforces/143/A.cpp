// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
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
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	for (int i=1; i<10; i++) {
		for (int j=1; j<10; j++) {
			if (i == j) continue;
			for (int k=1; k<10; k++) {
				if (i == k || j == k) continue;
				for (int l=1; l<10; l++) {
					if (i == l || j == l || k == l) continue;
					// i j
					// k l
					if (i+j == r1 && k+l == r2 && i+l == d1 && j+k == d2
					 && i+k == c1 && j+l == c2) {
						 cout << i << ' ' << j << '\n' << k << ' ' << l;
						 return 0;
					 }
				}
			}
		}
	}
	cout << -1;

	return 0;
}
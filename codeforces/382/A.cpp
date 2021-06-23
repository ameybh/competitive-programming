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
	string a, b;
	cin >> a >> b;
	int p = 0, q = 0, i = 0;
	for (i=0; i<(int)a.size(); i++) {
		if (a[i] == '|') {
			i++;
			break;
		}
	}
	p = i-1;
	q = (int)a.size()-p-1;
	// cout << p << ' ' << q << '\n';
	if (abs(p-q) <= (int)b.size()) {
		for (int i=0; i<abs(p-q); i++) {
			if (p < q) {
				a = b[i]+a;
			} else {
				a+=b[i];
			}
		}
		if (((int)b.size() - abs(p-q)) % 2 == 0) {
			for (int i=b.size()-1; i>=abs(p-q); i--) {
				if (i&1) {
					a += b[i];
				} else {
					a = b[i]+a;
				}
			}
			cout << a << '\n';
		} else {
			cout << "Impossible";
		}
		
	} else {
		cout << "Impossible";
	}
	return 0;
}
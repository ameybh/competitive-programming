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
	
	vector < string > a(4);
	for (auto& e:a) cin >> e;
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			int cnt = (a[i][j] == '.') + (a[i+1][j] == '.')
			 + (a[i+1][j+1] == '.') + (a[i][j+1] == '.');
			if (cnt >= 3 || cnt <= 1) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
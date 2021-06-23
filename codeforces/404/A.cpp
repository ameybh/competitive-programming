// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	FASTIO
	
	
	int n;
	cin >> n;
	
	
	vector<string> pattern;
	
	rep (i,0,n) {
		string x;
		cin >> x;
		pattern.pb(x);
	}
	
	char dig = pattern[0][0];
	char nonDig = pattern[0][1];
	
	bool ok = true;
	rep (i,0,n) {
		rep (j,0,n) {
			if (i!=j && i!=n-1-j) {
				// non-diagonal elements should not be equal to diagonal elements
				ok &= pattern[i][j] != dig;
				// all non-diagonal elements should be equal
				ok &= pattern[i][j] == nonDig;
			}
			ok &= pattern [i][j] == pattern [i][n-1-j];
			ok &= pattern [j][i] == pattern [j][n-1-i];
			if (i == n/2 && j == n/2) ok &= pattern[i][j] == dig;
		}
	}
	
	
	
	if (ok) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	

	return 0;
}
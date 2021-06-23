// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


void solution() {
	int x,y;
	cin >> x >> y;
	if (x-y == 2 || x-y == 0) {
		if (x&1 && y&1) {
			cout << x+y-1 << "\n";
		}
		else {
			cout << x+y << "\n";
		}
	}
	else {
		cout << "No Number\n";
	}
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

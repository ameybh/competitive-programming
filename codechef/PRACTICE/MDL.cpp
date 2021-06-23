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


void solution() {
	//cout << "HelloWorld!\n";
	
	int n;
	cin >> n;
	
	int mi=1e9, mx=-1, miI = 0, mxI = 0;
	rep (i,0,n) {
		int x;
		cin >> x;
		if (x < mi) {
			mi = x;
			miI = i;
		}
		if (x > mx) {
			mx = x;
			mxI = i;
		}
	}
	if (miI < mxI) {
		cout << mi << " " << mx << "\n";
	}
	else {
		cout << mx << " " << mi << "\n";
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

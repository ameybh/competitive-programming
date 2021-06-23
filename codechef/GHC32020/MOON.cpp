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
	
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	
	ll total = n*x + m*y;
	
	rep(i,0,n+1) {
		rep(j,0,m+1) {
			//cout << i*x + j*m << " " << (n-i)*x + (m-j) * x << "\n";
			//if (i*x + j*m == (n-i)*x + (m-j) * x) {
				//cout << "YES\n";
				//return;
			//}
			
			if (i*x + j*y ==  0.5*total) {
				cout << "YES\n";
				return;
			}
			
		}
	}
	
	
	if (n*x == m*y) {
		cout << "YES\n"; return;
	}
	
	
	//if (n == 0 && m*y == ) {
	//}
	
	
	cout << "NO\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

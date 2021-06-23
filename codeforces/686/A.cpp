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
	
	ll n,x;
	cin >> n >> x;
	ll di = 0;
	rep(i,0,n) {
		
		
		char op;
		ll  ch;
		cin >> op >> ch;
		
		
		if(op=='+') {
			x+=ch;
		}
		else {
			if(x>=ch) {
				x-= ch;
			}
			else {
				di++;
			}
		}
		 
		
	}
	
	
	
	cout << x << " " << di << "\n";
	
	return 0;
}
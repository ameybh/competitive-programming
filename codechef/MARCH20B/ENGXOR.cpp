// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef MARCH20B 

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
#define bpc(x) __builtin_popcount(x) 


void solution() {
	ll n, q, feven=0, fodd=0;
	cin >> n >> q;
	ll a[n],b[n];
	rep(i,0,n) {
		cin >> a[i];
		b[i] = bpc(a[i]);
	}
	
	rep(i,0,q) {
		ll p;
		cin >> p;
		
		int bp = bpc(p);
		int pat;
		// 1 means print in form of even, odd
		// 0 means print in form of odd,even
		// w.r.t. case @i=0
		if(i==0) {
			rep(j,0,n) {
				if((b[j]+bp) & 1) fodd++;
				else feven++;
			}
			pat = (b[0]+bp) & 1;
			cout << feven << " " << fodd << "\n";
		}
		else {
			if ( ((bp+b[0]) & 1) == pat) {
				cout << feven << " " << fodd << "\n";	
			}
			else {
				cout << fodd << " " << feven << "\n";
			}
		}
		
		
		
	}
	
	
}
	



int main() {
	FASTIO
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

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

int main() {
	
	
	
	int t;
	cin >> t;
	
	
	while(t--) {
		int n;
		cin >> n;
		int m[n], f[n];
		rep(i,0,n) cin >> m[i];
		rep(i,0,n) cin >> f[i];
			
		sort(m,m+n);
		sort(f,f+n);
		ll s = 0;
		rep(i,0,n) s+=m[i]*f[i];
		
		cout << s << "\n";
	}
	
	
	
	
	return 0;
}

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
	
	ll n;
	cin >> n;

	ll a[n];
	rep(i,0,n) cin >> a[i];
	
	rep(i,0,n) {
		if(i==0) {
			cout << a[i+1]-a[i] <<  " " << a[n-1] - a[i] << "\n";
		}
		else if (i==n-1) {
			cout << a[i]-a[i-1] << " " << a[i]-a[0] << "\n";
		}
		else {
			
			ll mx = max(a[i]-a[0], a[n-1]-a[i]), mi = min(a[i+1]-a[i], a[i]-a[i-1]);
			cout << mi << " " << mx << "\n";
			
		}
	}
	
	
	
	return 0;
}
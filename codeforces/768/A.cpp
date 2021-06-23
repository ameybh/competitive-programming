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
	
	
	ll mi=1e9,mx=-1;
	rep(i,0,n) {
		cin >> a[i];
	}
	rep(i,0,n) {
		mx = max(mx,a[i]);
		mi = min(mi,a[i]);
	}
	ll c=0;
	rep(i,0,n) {
		if(a[i]>mi && a[i]<mx) c++;
	}
	cout << c << "\n";
	
		
	return 0;
}
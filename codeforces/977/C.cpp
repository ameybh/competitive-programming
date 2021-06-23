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
	
	
	ll n, k;
	cin >> n >> k;
	ll a[n];
	rep(i,0,n) cin >> a[i];
	
	sort(a, a+n);
	if (k != 0) {
	
		

		//rep(i,0,n) cout << a[i] << " ";

		bool ok = true;
		rep(i,0,k) {
			ok &= a[i] <= a[k-1];
		}
		ll x = a[k-1];

		if(ok) {
			if (a[k] == a[k-1]) cout << -1;
			else cout << x;
		}
		else cout << -1;
	}
	else {
		ll ans = a[0] - 1;
		if (ans >= 1 ) cout << ans;
		else cout << -1;
	}
	
	
	
	return 0;
}
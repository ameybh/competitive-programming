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
	ll n;
	cin >> n;
	ll a[n];
	cin >> a[0];
	ll g=a[0];
	rep(i,1,n) {
		cin >> a[i];
		g = __gcd(g,a[i]);
		//cout << g << "\n";
	}
	if(g==1) cout << n << "\n";
	else cout << "-1\n"; 
	
	
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

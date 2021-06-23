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
	
	ll n,k;
	cin >> n >> k;
	
	if(n&1) {
		if (k<=(n/2)+1) cout << 2*k-1;
		else cout << 2*(k-(n/2)-1);
	}
	else {
		if (k<=(n/2)) cout << 2*k - 1;
		else cout << 2*(k-(n/2));
	} 
	
	
	return 0;
}
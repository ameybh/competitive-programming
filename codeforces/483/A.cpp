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
	
	ll l, r;
	cin >> l >> r;
	
	
	
	if (l % 2 !=0) l++;
	
	if (l+2 > r) {
		cout << "-1\n";
	}
	else {
		cout << l << " " << l+1 << " " << l+2;
	}
	
	return 0;
}
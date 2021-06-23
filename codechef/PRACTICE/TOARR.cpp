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
	ll count=1;
	// first element is always common
	ll p,q;
	cin >> p;
	ll a[p];
	rep(i,0,p) cin >> a[i];
	
	cin >> q;
	ll b[q];
	rep(i,0,q) cin >> b[i];
	
	
	ll i=p-1, j=q-1;
	while(i>=1 && j>=1) {
		if(a[i]==b[j]) {count++; i--; j--;}
		else if(a[i]>b[j]) {i--;}
		else {j--;}
	}
	cout << count << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

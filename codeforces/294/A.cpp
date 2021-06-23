// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codeforces

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
	ll wires[n];
	rep(i,0,n) cin >> wires[i];
	
	ll m;
	cin >> m;
	rep(j,0,m) {
		ll x,y;
		cin >> x >> y;
		ll i = x-1;
		if(i-1>=0) {
			wires[i-1]+=y-1;
		}
		if(i+1<n) {
			wires[i+1]+=wires[i]-y;
		}
		wires[i] = 0;
		//cout << wires[i] << "\n";
	}
	rep(i,0,n) {
		cout << wires[i] << "\n";
	}
	
	return 0;
}
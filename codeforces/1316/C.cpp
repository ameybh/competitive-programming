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


int smallest(string x) {
	ll n = (ll) x.size();
	char smallest = 'z';
	int index =1;
	rep(i,0,n) {
		if(x[i]<smallest) {
			smallest = x[i];
			index = i+1;
		}
	}
	
	return index;
}


void solution() {
	ll n,m,p;
	cin >> n >> m >> p;
	ll f[n];
	ll g[m];
	rep(i,0,n) cin >> f[i];
	rep(i,0,m) cin >> g[i];
	
	ll c = n+m-1;
	ll h[c];
	rep(i,0,c) {
		h[i] = 0;
		rep(j,0,i+1) {
			if(j<n && i-j <m) {
			h[i]+=f[j]*g[i-j];
		}
		}
	}
	
	//rep(i,0,n+m-1) cout << h[i] << " ";
	ll ans = 1;
	rep(i,0,c) {
		if(h[i]%p !=0) {
			ans = i;
			break;
		}
	}
	cout << ans;

	
	
}



int main() {
	
		solution();
	
	return 0;
}
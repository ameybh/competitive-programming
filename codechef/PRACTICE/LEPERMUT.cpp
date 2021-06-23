// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

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

#define bpc(x) __builtin_popcount(x) 


void solution() {
	ll n;
	cin >> n;
	int a[n];
	rep(i,0,n) cin >> a[i];
	
	ll in=0,lin=0;
	
	rep(i,0,n) {
		rep(j,i+1,n) {
			if(a[i]>a[j]) in++;
		}
		if(i+1!=n && a[i]>a[i+1]) lin++;
	}
	
	if(in==lin) cout << "YES\n";
	else cout << "NO\n";
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





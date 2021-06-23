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
	ll n,a,b,ca,cb,da,db,sc,sd, ext = 0, s;
	cin >> n >> a >> b;
	
	ca = bpc(a); cb = bpc(b);
	sc = ca+cb;
	da = n-ca; db = n-cb;
	sd = da+db;
	
	
	
	
	
	////if (ca > cb) {
		////x=a; y=b;
	////}
	////else {
		////x=b; y=a;
	////}
	if( (ca + cb) > n) ext=ca+cb-n+1; // count of bits that overgo n
	
	s = pow(2, n-1)*(1-pow(0.5, min(sc,sd)))/(0.5);
	
	cout << s << "\n";
	
	
	
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





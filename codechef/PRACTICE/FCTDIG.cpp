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


ll digs(ll n) {
	if(n<0)
		return 0;
	if(n<=1)
		return 1;

	double ln10 = 0;
	rep (i,2,n+1) {
		ln10 += log10(i);
	}
	return floor(ln10) + 1;
	//cout << floor(ln10) + 1 << "\n";
}


void solution() {
	
	ll n;
	cin >> n;
	rep(i,0,n) {
		ll x;
		cin >> x;
		cout << digs(x) << " ";
	}
	
	cout << "\n";
	
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





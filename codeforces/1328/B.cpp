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
	ll n,k;
	cin >> n >> k;
	string x = "";
	
	ll fb = 2, sb = 1;
	ll fIndex = 1;
	while ((fIndex*(fIndex+1))/2 < k) fIndex++;
	
	ll tmp = (fIndex*(fIndex-1))/2;
	ll tmp2 = k - tmp;
	
	//cout << fIndex << " " << tmp2 << "\n";
	
	for(ll j=n; j>=1; j--) {
		if (j!= fIndex+1 && j!= tmp2) cout << 'a';
		else cout << 'b';
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
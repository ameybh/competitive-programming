// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Spoj

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
	
	ll n;
	cin >> n;
	//ll c1 = floor(n/5);
	//ll c2 = floor(n/2);
	////ll c3 = floor(n/10);
	ll c=0,i=1;
	while((n/pow(5,i)) >= 1) {
		c += (ll)(n/pow(5,i));
		i++;
	}
	
	cout << c << "\n";

}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

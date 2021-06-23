// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repD(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


void solution() {
	//cout << "HelloWorld!\n";
	string x;
	cin >> x;
	ll n = x.size();
	string output;
	switch(x[n-1]) {
		case 'o': output="FILIPINO";break;
		case 'a': output="KOREAN";break;
		case 'u': output="JAPANESE";break;
	}
	cout << output << "\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
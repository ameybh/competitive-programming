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
	
	ll n,m;
	cin >> n >> m;
	vi scores;
	ll sum =0;
	rep(i,0,n) {
		ll x;
		cin >> x;
		sum += x;
		scores.pb(x);
	}
	if(sum>m) {
		cout << m <<"\n";
	}
	else {
		cout << sum << "\n";
	}
	//double avg;
	//avg = sum/n;
	//if((double)m/n == avg) {
		//cout << m;
	//}
	//else {
		
	//}
	
	
	
	
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
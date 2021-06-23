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
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	string seq;
	cin >> seq;
	ll cal=0;
	ll n = (int) seq.size();
	rep(i,0,n) {
		int x = int(seq[i]) - '0';
		
		if(x==1) cal+=a;
		if(x==2) cal+=b;
		if(x==3) cal+=c;
		if(x==4) cal+=d;
		
	}
	cout << cal << "\n";
	
	
}
int main() {
	FASTIO
	solution();
	return 0;
}
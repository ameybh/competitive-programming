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



int main() {
	ll n,k;
	cin >> n >> k;
	
	double dist = 0;
	ll px,py;
	cin >> px >> py;
	rep(i,1,n) {
		ll cpx, cpy;
		cin >> cpx >> cpy;
		dist += sqrt((cpx-px)*(cpx-px) + (cpy-py)*(cpy-py));
		px = cpx;
		py = cpy;
	}
	
	
	//cout << dist << "\n";
	
	cout << fixed << setprecision(9) << k*(double)dist/50;
	
	
}
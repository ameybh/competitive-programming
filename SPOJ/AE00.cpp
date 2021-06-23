// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main() {
	
	//ll  dp[10001];
	
	//rep(i,0,10001) dp[i] = 0;
	
	int num;
	cin >> num;
	
	ll cnt = 0;
	
	
	// count rectangles with area 'n'
	
	rep(n,1,num+1) {
		for (int i=1; i<=sqrt(n); i++) {
			if (n%i == 0) cnt++;
		}
	}
	
	
	cout << cnt << "\n";
	
	
	return 0;
}

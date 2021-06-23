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


int digits[] = {8, 4, 2, 6};

int main() {
	FASTIO
	
	ll n;
	cin >> n;
	if (n == 0) {
		cout << 1;
		return 0;
	}
	cout << digits[(n-1)%4];
	return 0;
}
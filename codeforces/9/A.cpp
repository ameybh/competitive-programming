// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codeforces

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
	FASTIO
	
	int y,w;
	cin >> y >> w;
	int mp = max(y,w);
	int n = 6-(mp-1);
	int d = 6;
	int x =gcd(n,d);
	while (x!=1) {
		n/=x;
		d/=x;
		x=gcd(n,d);
	}
	cout << n << "/" << d;
	
	
	return 0;
}
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
	
	ll n,b,d;
	cin >> n >> b >> d;
	ll s = 0, c = 0;
	rep(i,0,n) {
		int x;
		cin >> x;
		if(x <= b) {
			s += x;
			if (s > d) {
				s = 0;
				c++;
			}
		}
	}
	
	cout << c;
	
	return 0;
}
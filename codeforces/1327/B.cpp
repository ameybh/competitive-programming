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


void solution() {
	//cout << "HelloWorld!\n";
	
	ll n;
	cin >> n;
	
	
	
	ll p[n],  d[n];
	rep(i,0,n) p[i]=0,d[i]=0;
	ll c = 0;
	
	
	rep(i,0,n) {
		ll k;
		cin >> k;
		rep(j,0,k) {
			ll x;
			cin >> x;
			if (p[x-1] || d[i]) continue;
			p[x-1] = 1;
			d[i] = 1;
			c++;
		}
	}
	
	
	//cout  << c << "\n";
	
	
	if (c == n) {
		cout << "OPTIMAL\n";
	} else {
		ll px, dx;
		rep(i,0,n) {
			if (p[i] == 0) {
				px = i; break;
			}
		}
		
		rep(i,0,n) {
			if (d[i] == 0) {
				dx = i; break;
			}
		}
		
		
		cout << "IMPROVE\n" << px+1 << " " << dx+1 << "\n";
		
	}
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

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

#define bpc(x) __builtin_popcount(x) 


int max(ll a, ll b) {
	return a>b?a:b;
}

void solution() {
	
	ll a,b;
	cin >> a >> b;
	ll moves = 0;
	if (a!=b) {
		if (a>b) {
			if((a-b)%2 !=0) {
				moves = 2;
			}
			else {
				moves = 1;
			}
		}
		else {
			if((b-a)%2 !=0) {
				moves = 1;
			}
			else {
				moves =2;
			}
		}
	}
	
	cout << moves << "\n";
	
}

int main() {
	FASTIO
	
	ll t;
	cin >> t;
	while(t--) {
		solution();
	}
	
	return 0;
}
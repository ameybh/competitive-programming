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

const ll N = 100000000;


int h[N];

int main() {
	FASTIO
	
	int32_t n, q;
	cin >> n;
	//ll h[n+1];
	
	rep(i,0,n+1) h[i] = 0;
	cin >> q;
	rep(i,0,q) {
		ll x;
		cin >> x;
		if (x==1) {
			int32_t y;
			cin >> y;
			h[y]++;
			//rep(j,1,n+1) cout << h[j] << " ";
			//cout << "\n";
		}
		else {
			int32_t y;
			cin >> y; 
			ll mn = 0;
			//if (h[y] == 0) mn ^= y;
			//y++;
			while(h[y]!=0) y++;
	
			while(y<=n && h[y] == 0) {
				mn ^= y;
				y++;
			}
			cout << mn << "\n";
			
		}
	}
	
	
	
	
	return 0;
}

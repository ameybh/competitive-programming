#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);    
int main() {
	// your code goes here
	FASTIO
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		// ll count0=0,count=0;
		ll count0=0, count2=0;
		
		ll nums[n];
		
		rep(i,0,n) {
			ll x;
			cin >> x;
			
			if(x==0) {
				count0++;
			}
			if(x==2) {
				count2++;
			}
			// end of rep
		}
		
		cout << (count0*(count0-1)+count2*(count2-1))/2 << "\n";
		
		// end of testcase
	}
	
	return 0;
}
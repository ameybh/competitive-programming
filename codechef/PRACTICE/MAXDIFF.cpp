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


void solution() {
	ll n,k;
	cin >> n >> k;
	int a[n];
	rep(i,0,n) cin >> a[i];
	sort(a,a+n,greater<int>());
	ll f=0,s=0;
	int larger = max(k,n-k);
	rep(i,0,n) {
		if(i<larger) {
			f+=a[i];
		}
		else {
			s+=a[i];
		}
	}
	
	
	cout << f-s << "\n";
	
	
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





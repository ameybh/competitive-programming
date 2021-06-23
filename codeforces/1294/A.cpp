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


string solution() {
	//cout << "HelloWorld!\n";
	ll a,b,c,n;
	cin >> a >> b >> c >> n;
	//cout << "X: " << (a+b+c+n)/3.0;
	if((a==b && b==c && n % 3 == 0) || ((a+b+c+n) % 3 == 0)) {
		return("YES\n");
	}
	
	ll ma,mb,mc,gap;
	ma = max(a,max(b,c));
	mc = min(a,min(b,c));
	mb = a+b+c-ma-mc;
	gap = 2*ma - mb - mc;
	if(n==gap)
		return("YES\n");
	if((gap-n)%3 == 0)
		return("YES\n");
	
	
	
	return("NO\n");
}


int main() {
	FASTIO
	ll t;
	cin >> t;	
	while(t--) {
		//solution();
		cout << solution();
	}
	
	return 0;
}
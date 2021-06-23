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



void solution() {
	ll n;
	cin >> n;
	string ans = "a";
	string curr = "b";
	n=n+((n-1)/25);
	for(int i=1; i<=n; i++) {
		if(curr[0]>'z') curr[0] = 'a';
		ans = curr+ans;
		curr[0]++;
	}
	cout << ans << '\n';
	
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





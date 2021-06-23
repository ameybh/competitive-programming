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
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	ll p[n];
	rep(i,0,n) {
		cin >> p[i];
	}
	
	sort(p, p+n, greater<int>());
	
	ll profit = 0;
	
	rep(i,0,n) {
		p[i] -= i;
		if (p[i] > 0) {
			profit += p[i] % 1000000007;
			profit %= 1000000007;
		}
	}
	
	
	cout << profit << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

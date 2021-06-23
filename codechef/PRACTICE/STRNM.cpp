// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef

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
	char vowels[] = {'a','e','i','o','u'};
	string s;
	cin >> s;
	ll n = (ll)s.size();
	ll num = 0;
	rep(i,0,n) {
		num<<=1;
		num%=1000000007;
		rep(j,0,5) {
			if(vowels[j] == s[i]) {
				num++;
				break;
			}
		}
		num%=1000000007;
	}
	
	
	cout << num << "\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

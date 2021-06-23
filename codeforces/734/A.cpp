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


void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	char s[n];
	cin >> s;
	//cout << s;
	ll a=0,d=0;
	rep(i,0,n) {
		if(s[i]=='A') a++;
		else d++;
	}
	if(a>d) cout << "Anton";
	else if(a<d) cout << "Danik";
	else cout << "Friendship";
	
	
}


int main() {
	FASTIO
	solution();
	return 0;
}
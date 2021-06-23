// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codechef
//

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
	int n;
	cin >> n;
	string s;
	cin >> s;
	//cout << s << "\n";
	char p = 'X';
	int x=0, y=0;
	rep (i,0,n) {
		
		if ((s[i] == 'L' || s[i] == 'R') && (p == 'L' || p == 'R')) {
			continue;
		}
		
		if ((s[i] == 'U' || s[i] == 'D') && (p == 'U' || p == 'D')) {
			continue;
		}
		
		
		//cout << s[i] << " " << i << "\n";
		
		switch (s[i]) {
			case 'L' : x--; break;
			case 'R': x++; break;
			case 'U': y++; break;
			case 'D' : y--; break;
		}
		
		
		p = s[i];
		
	}
	cout << x << " " << y << "\n";
}
	
	
	


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

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

int main() {
	FASTIO
	
	
	string s;
	cin >> s;
	
	int n = (int)s.size();
	
	
	bool first = false;
	for(int i=0; i<n-2; i++) {
		//cout << s.substr(i,3) << "\n";
		 if(s.substr(i,3) == "WUB") {
			 i+=2;
			 if(first) cout << " ";
			 if(!first && i>=n-2) first=true;
			 
		 }
		 else {
			 cout << s[i];
		 }
		
	}
	
	rep(i,n-2,n) {
		cout << s[i];
	}
	
	
	
	
	return 0;
}
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
	
	int n,m;
	cin >> n >> m;
	//vector< vector<char> > data;
	
	
	rep(i,0,n) {
		//vector<char> row;
		//rep(j,0,m) {
			//char x;
			//cin >> x;
			//row.pb(x);
		//}
		
		//data.pb(row);
		
		
		rep(j,0,m) {
			char x;
			cin >> x;
			switch (x) {
				
				case 'C':
				case 'M':
				case 'Y': cout << "#Color"; return 0;
				
				
				
				
			}
		}
		
	}
	
	
	cout << "#Black&White";
	
	
	
	
	
	return 0;
}
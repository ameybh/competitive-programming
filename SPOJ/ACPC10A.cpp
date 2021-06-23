// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	
	
	int a, b, c;
	while(cin >> a && cin >> b && cin >> c && (a != 0 || b != 0 || c != 0) ) {
		//cout << a+b+c << "\n";
		
		if(b-a == c-b) {
			cout << "AP " << 2*c - b << "\n";
		}
		else {
			cout << "GP " << c*(c/b) << "\n";
		}			
	}	
	return 0;
}



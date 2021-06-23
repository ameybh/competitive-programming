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
	
	int n,k;
	cin >> n >> k;
	
	
	int i=1;
	char curr = 'a';
	while(i<=n) {
		cout << curr;
		curr++;
		i++;
		if(curr>'a'+k-1) {
			curr='a';
		}
	}
	
	
	
	
	
	return 0;
}
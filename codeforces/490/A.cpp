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
	
	int n;
	cin >> n;
	//int a[n];
	
	int c1=0,c2=0,c3=0;
	vector<int> d1,d2,d3;
	
	rep(i,1,n+1) {
		int x;
		cin >> x;
		switch(x) {
			case 1: c1++;d1.pb(i);break;
			case 2: c2++;d2.pb(i);break;
			case 3: c3++;d3.pb(i);break;
		}
	}
	cout << min(min(c1,c2),c3) << "\n";
	int i=0;
	while(i<c1 && i <c2 && i<c3) {
		cout << d1[i] << " " << d2[i] << " " << d3[i] << "\n";
		i++;
	}
	
	
	
	
	return 0;
}
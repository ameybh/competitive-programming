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
	
	
	ll n;
	cin >> n;
	int a[n];
	rep(i,0,n) cin>>a[i];
	ll s=0,d=0;
	//rep(i,0,n) {
		//if(i%2==0) {
			////sereja's turn
			//max()
		//}
		//else {
			////dima's turn
		//}
	//}
	int f=0,l=n-1;
	int turn=1;
	while(n>0) {
		if(max(a[f], a[l])==a[f]) {
			if(turn&1) s+=a[f];
			else d+=a[f];
			f++;
		}
		else {
			if(turn&1) s+=a[l];
			else d+=a[l];
			l--;
		}
		n--;
		turn++;
	}
	cout << s << " " << d;
}

int main() {
	FASTIO
	solution();
	return 0;
}
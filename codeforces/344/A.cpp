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
	int a;
	cin >> a;
	a=a%10;
	int c=0;
	rep(i,1,n) {
		int x;
		cin >> x;
		if(x%10!=a) c++;
		a=x%10;
	}
	cout << c+1;
	
}

int main() {
	FASTIO
	solution();
	return 0;
}
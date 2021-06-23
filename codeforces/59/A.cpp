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
	string x;
	cin >> x;
	int n = (int) x.size(), u=0, l=0;
	
	rep(i,0,n)  {
		if(isupper(x[i])) u++;
		else l++;
	}
	if(u>l) {
		rep(i,0,n) {
			x[i] = toupper(x[i]);
		}
	}
	else {
		rep(i,0,n) {
			x[i] = tolower(x[i]);
		}
	}
	
	
	cout << x;
}

int main() {
	FASTIO
	solution();
	return 0;
}
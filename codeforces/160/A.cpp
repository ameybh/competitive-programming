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
	
	
	ll n;
	cin >> n;
	int a[n];
	int sum=0;
	rep(i,0,n) {
		cin >> a[i];
		sum+=a[i];
	}
	
	sort(a,a+n,greater<int>());
	
	int total = 0;
	int i=0;
	while(total <= sum-total && i<n) {
		total+=a[i];
		i++;
	}
	cout << i << "\n";
	
	
	return 0;
}
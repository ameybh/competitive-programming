// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef MARCH20B 

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
	int n,m;
	cin >> n >> m;
	int cost[m];
	int count[m];
	memset(cost, 0, sizeof(cost));
	memset(count, 0, sizeof(count));
	//rep(i,0,m) {
		//cout << cost[i] << " ";
	//}
	
	int p[n], f[n];
	rep(i,0,n) {cin >> f[i]; count[f[i]-1]++;}
	rep(i,0,n) cin >> p[i];
	
	rep(i,0,n) {
		cost[f[i]-1]+=p[i];
	}
	
	//rep(i,0,m) {
		//cout << cost[i] << " ";
	//}

	
	int min = 1e9;
	rep(i,0,m) {
		if(count[i]!=0) {
		if(cost[i]<min) {
			min = cost[i];
		}
		}
	}
	
	cout << min << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

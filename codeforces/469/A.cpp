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
	
	ll n,p1,p2;
	cin >> n;
	
	set<int> ns;
	cin >> p1; 
	rep(i,0,p1) {
		int x;
		cin >> x;
		ns.insert(x);
	}
	cin >> p2;
	rep(i,0,p2) {
		int x;
		cin >> x;
		ns.insert(x);
	}
	
	if((int) ns.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	
	return 0;
}
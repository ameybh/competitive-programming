// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codeforces

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
	
	string s,t;
	cin >> s;
	cin >> t;
	
	int si = 0;
	int tsize = (int) t.size();
	
	rep(i,0,tsize) {
		if(t[i]==s[si]) {
			si++;
		}
	}
	
	cout << si+1;
	
	return 0;
}
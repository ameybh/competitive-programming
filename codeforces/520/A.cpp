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
	string s;
	//getline(cin,s);
	
	cin >> s;
	
	if(n>=26) {
		bool mark[26];
		memset(mark,false,26);
		rep(i,0,n) {
			if(isupper(s[i])) {
				mark[s[i]-'A'] = true;
			}
			else {
				mark[s[i]-'a'] = true;
			}
		}
		bool flag = true;
		rep(i,0,26) {
			flag &= mark[i];
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	} else {
		cout << "NO\n";
	}
	
	return 0;
}
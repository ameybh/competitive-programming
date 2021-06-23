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
	set<char> chars;
	string s;
	//cin >> s;
	getline(cin,s);
	//cout << s << "\n";
	
	rep(i,0,(int)s.size()) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			chars.insert(s[i]);
		}
	}
	
	
	
	//for(auto itr = chars.begin(); itr != chars.end(); ++itr) {
		//cout << *itr << " ";
	//}
	
	//chars.insert('a');
	
	
	cout << (int)chars.size() << "\n";	
	
	return 0;
}
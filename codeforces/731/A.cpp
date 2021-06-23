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


void solution() {
	string s;
	cin >> s;
	int n = (int) s.size();
	int rot = 0;
	char curr = 'a';
	rep(i,0,n) {
		char x = s[i];
		rot += min(26-(abs(x-curr) ), abs(x-curr));
		curr = x;
	}
	cout << rot;
	
}
int main() {
	FASTIO
	solution();
	return 0;
}
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
	
	int n;
	cin >> n;
	
	map<string,int> data;
	

	rep(i,0,n) {
		string s;
		cin >> s;
		if(data[s]) data[s]++;
		else data[s]=1;
	}
	
	int mx = -1;
	string winner;
	for(auto i =data.begin(); i!=data.end(); ++i) {
		if(i->second > mx) {
			mx = i->second;
			winner = i->first;
		}
	}
	
	cout << winner;

	
	
	
	return 0;
}
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
	int n;
	cin >> n;
	vector< pair<int,int> > unis;
	rep(i,0,n) {
		int x,y;
		cin >> x >> y;
		unis.push_back(make_pair(x,y));
	}
	
	ll c = 0;
	
	rep(i,0,n) {
		pair<int,int> x = unis[i];
		rep(j,0,n) {
			if(j!=i) {
				pair<int,int> y = unis[j];
				//home match
				if(x.first == y.second) c++;
			}
		}
	}
	
	
	cout << c << "\n";
	
}
int main() {
	FASTIO
	solution();
	return 0;
}
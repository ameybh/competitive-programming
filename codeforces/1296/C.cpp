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


int search(vector< pair<int,int> > data, pair<int,int> x) {
	ll n = (int) data.size();
	//ll pos = 0;
	rep(i,0,n) {
		if(data[i].first == x.first && data[i].second == x.second) return i+1;
	}
	return -1;
}

void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	string dir;
	cin >> dir;
	
	//pair<int,int> pos  = mp(0,0);
	//rep(i,0,n) {
		//if(dir[i]=='R') pos.first++;
		//if(dir[i]=='L') pos.first--;
		//if(dir[i]=='U') pos.second++;
		//if(dir[i]=='D') pos.second--;
	//}
	
	
	//pair<int,int> posNew  = mp(0,0);
	//rep(i,0,n) {
		//if(dir[i]=='R') posNew.first++;
		//if(dir[i]=='L') posNew.first--;
		//if(dir[i]=='U') posNew.second++;
		//if(dir[i]=='D') posNew.second--;
		
		//if(i!=0) {	
			
		//}
	//}
	
	vector< pair<int,int> > posits;
	posits.push_back(mp(0,0));
	ll x=0,y=0;
	bool found  = false;
	rep(i,0,n) {
		if(dir[i]=='R') x++;
		if(dir[i]=='L') x--;
		if(dir[i]=='U') y++;
		if(dir[i]=='D') y--;
		pair<int,int> newpos = mp(x,y);
		ll pos = search(posits,newpos);
		if(pos>0) {
			cout << pos << " " << i+1 << "\n";
			found = true;
			break;
		}
		posits.pb(newpos);
	}
	if(!found) {
		cout << -1;
	}
	
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
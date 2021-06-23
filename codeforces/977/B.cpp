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
	
	ll n;
	cin >> n;
	
	string x;
	cin >> x;
	
	map<string,int> data;

	rep(i,0,n-1) {
		string curr = x.substr(i,2);
		if (data[curr]) data[curr]++;
		else data[curr] = 1;
	}
	
	
	vector< pair<int, string> > data2;
	
	for (auto i=data.begin(); i!=data.end(); i++) {
		//cout << i->first << " " << i->second << "\n";
		data2.pb(mp(i->second, i->first));
	}
	
	
	sort(data2.begin(), data2.end());
	
	cout << data2[(ll)data2.size()-1].ss;
	
	//rep(i,0,(int)data2.size()) {
		//cout << data2[i].ff << " " << data2[i].ss << "\n";
	//}
	
	//sort(data2.begin(),data2.end(), greater<int>());
	
	//cout << data2[0].ff;
	
	
	
	
	return 0;
}
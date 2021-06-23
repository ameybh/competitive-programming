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


int smallest(string x) {
	ll n = (ll) x.size();
	char smallest = 'z';
	int index =1;
	rep(i,0,n) {
		if(x[i]<smallest) {
			smallest = x[i];
			index = i+1;
		}
	}
	
	return index;
}


void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	string x;
	cin >> x;
	
	
	if (x.size() ==1){
		cout << x << "\n" << 1 << "\n";
	}
	else if(x[0] == 'a') {
		if (x[1]=='a') {
			for(auto e : x) cout << e;
			cout << "\n" << 1 << "\n";
		}
		else if(x[n-1] == 'a') {
			reverse(x.begin(), x.end());
			for(auto e : x) cout << e;
			cout << "\n" << n << "\n";
		}
		else {
			for(auto e : x) cout << e;
			cout << "\n" << 1 << "\n";
		}
	}
	else {
		ll k = smallest(x);
		//string newX = "";
		rep(i,0,n-k+1) {
			//string seg = x.substr(i,k);
			reverse(x.begin()+i,x.begin()+k+i);
			//newX += seg;
			//cout << x << " \n";
		}	
		
		cout << x << "\n" << k << "\n";
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
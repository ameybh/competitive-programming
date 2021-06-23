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
	
	string s;
	getline(cin,s);
	
	vector<int> nums;
	rep(i,0,s.size()) {
		if(isdigit(s[i])) nums.pb(s[i]-'0');
	}
	sort(nums.begin(),nums.end());
	
	
	rep(i,0,nums.size()) {
		if(i!=nums.size()-1) {
			cout << nums[i] << "+";
		}
		else {
			cout << nums[i] << "\n";
		}
	}
	
	
	
	return 0;
}
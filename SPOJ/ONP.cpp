// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


void solution() {
	//cout << "HelloWorld!\n";
	
	string s;
	//getline(cin, s);
	cin >> s;
	ll n = (ll) s.size();
	
	stack <char> data;
	vector <pair<char, ll> > op;
	stack <char> var;
	
	
	
	
	ll level = 0;	
	rep(i,0,n) {
		if (s[i] == '(') level++;
		if (s[i] == ')') {
			
			vector<char> dataO;
			while(!data.empty()) {
				//cout << data.top();
				dataO.pb(data.top());
				data.pop();
			}
			
			repD(j,(ll)dataO.size()-1,0) {
				cout << dataO[j];
			}
			
			
			repD(j,(ll)op.size()-1,0) {
				if (op[j].second != level) continue;
				cout << op[j].first;
				op.erase (op.end());
			}
			
			level--;
		}
		if (level == 0) {
			break;
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
			data.push(s[i]);
		}
		if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*' || s[i] == '^') {
			// var.push(s[i]);
			op.push_back(mp(s[i], level));
		}
	}
	cout << "\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

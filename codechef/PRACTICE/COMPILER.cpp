// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

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

#define bpc(x) __builtin_popcount(x) 


int max(ll a, ll b) {
	return a>b?a:b;
}

void solution() {
	string exp;
	cin >> exp;
	
	ll es = (ll) exp.size();
	
	ll len = 0, mxlen = 0, lev=0;
	
	rep (i,0,es) {
		if (exp[i] == '<') {
			lev++;
		}
		else {
			lev--;
			if(lev == 0) {mxlen = max(mxlen, i+1);}
			else if (lev < 0) {
				break;
			}
		}
	}
	
	cout << mxlen << "\n";
	
}

int main() {
	FASTIO
	
	ll t;
	cin >> t;
	while(t--) {
		solution();
	}
	
	return 0;
}





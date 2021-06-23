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

void solution() {
	ll l,d,s,c;
	cin >> l >> d >> s >> c;
	bool alive = false;
	rep (i,0,d) {
		if (s>=l) {
			cout << "ALIVE AND KICKING\n";
			alive = true;
			break;
		}
		s += s*c;
		//cout << "s" << ":" << s << "\n";
		
		
	}
	
	if(!alive) cout << "DEAD AND ROTTING\n";
	
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





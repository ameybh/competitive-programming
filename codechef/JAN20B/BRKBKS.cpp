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


void solution() {
	//cout << "HelloWorld!\n";
	double s,p,q,r,w1,w2,w3,t;
	cin >> s >> w1 >> w2 >> w3;
	// cout << ceil((w1+w2+w3)/s) << "\n";
	ll ans,ansr;
	
	
	if(w1+w2+w3<=s) {
		// cout << 1 << "\n";
		ans = 1;
		// can break in one shot
	}
	else {
		if(w1+w2<=s) {
			// cout << 2 << "\n";
			ans = 2;
		}
		else {
			// cout << 3 << "\n";
			ans = 3;
		}
	}
	
	t = w1;
	w1 = w3;
	w3 = t;
	
	
	if(w1+w2+w3<=s) {
		// cout << 1 << "\n";
		ansr = 1;
		// can break in one shot
	}
	else {
		if(w1+w2<=s) {
			// cout << 2 << "\n";
			ansr = 2;
		}
		else {
			// cout << 3 << "\n";
			ansr = 3;
		}
	}
	
	
	cout << min(ans,ansr) << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	// rep(s,1,9) {
	// 	//s
	// 	rep(w1,1,3) {
	// 		//w1
	// 		rep(w2,1,3) {
	// 			//w2
	// 			rep(w3,1,3) {
	// 				//w3
	// 				if(w1<=s && w2<=s && w3<=s){
	// 					cout << s << " " << w1 << " " << w2 << " " << w3 << "\n";
	// 					solution(s,w1,w2,w3);
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	
	
	return 0;
}

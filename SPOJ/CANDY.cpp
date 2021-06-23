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

int main() {
	
	int n;
	while (cin >> n && n!=-1) {
		int a[n];
		int s=0;
		rep(i,0,n) cin >> a[i], s+=a[i];
		
		if (s % n == 0) {
			int avg = s/n;
			int ans = 0;
			rep(i,0,n) {
				if (a[i]-avg > 0) ans += a[i]-avg;
			}
			cout << ans << "\n";
		}
		else {
			cout << "-1\n";
		}
		
	}
	
	
	
	return 0;
}

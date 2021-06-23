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


void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	
	int j = 0;
	
	int a[n];
	rep (i,0,n) cin >> a[i];
	
	while(a[j] != 1 && j < n) j++;
	//j stores index of first 1
	
	//cout << j << "\n";
	
	
	int cnt = 0;
	rep (i,j+1,n) {
		//cout << a[i] << " " << cnt << "\n";
		if (a[i] == 0) cnt ++;
		else {
			if (cnt < 5) {
				cout << "NO\n";
				return;
			}
			else {
				cnt = 0;
			}
		}
	}	
	
	cout << "YES\n";
	
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

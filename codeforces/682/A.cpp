// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector< int > cnt_a(5), cnt_b(5);
	rep(i,1,n+1) {
		cnt_a[i % 5]++;
	}
	rep(i,1,m+1) {
		cnt_b[i % 5]++;
	}
	
	ll ans = 0;
	rep(i,0,5) 
		rep(j,0,5) 
			if ((i+j)%5 == 0)
				ans += (ll)cnt_a[i]*(ll)cnt_b[j];			
	cout << ans << '\n';
	
	return 0;
}
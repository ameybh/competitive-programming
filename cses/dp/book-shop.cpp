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
const int nax = 1e3 + 10;
const int wax = 1e5 + 10;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, x;
	cin >> n >> x;
	vector<int>h(n),s(n);
	for(auto&e:h)cin>>e;
	for(auto&e:s)cin>>e;
	vector<int> dp(wax);
	
	rep(i,0,n) {
		repD(w,x,0) {
			if (w-h[i]>=0) {
				dp[w] = max(dp[w], dp[w-h[i]] + s[i]);
			}
		}
	}
	cout << *max_element(all(dp));
	return 0;
}

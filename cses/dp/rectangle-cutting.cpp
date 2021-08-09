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
const int nax = 500 + 5;
int a, b;
vector< vector< int > > dp(nax, vector< int > (nax + 5));

int dpx(int x, int y) {
	if (dp[x][y] != 0) return dp[x][y];
	if (x < y) swap(x,y);
	return dp[x][y] = dpx(y,y) + dpx(x-y, y);
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	
	
	return 0;
}

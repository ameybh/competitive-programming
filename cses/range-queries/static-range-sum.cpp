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
const int nax = 2e5 + 10;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, q;
	cin >> n >> q;
	vector< ll > a(nax);
	rep(i,1,n+1) cin >> a[i];
	rep(i,1,n+1) a[i] += a[i-1];
	rep(i,0,q) {
		int x, y;
		cin >> x >> y;
		cout << a[y] - a[x-1] << '\n';
	}
	return 0;
}

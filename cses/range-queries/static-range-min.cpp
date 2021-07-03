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
const int k = 25;
int logs[nax+5];
int st[nax+5][k+1];
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	logs[1] = 0;
	for (int i = 2; i <= nax; i++)
    logs[i] = logs[i/2] + 1;
	int n, q;
	cin >> n >> q;
	vector< ll > a(nax);
	rep(i,0,n) {
		cin >> a[i];
		st[i][0] = a[i];
	}
	rep(j,1,k+1)
		for (int i=0; i + (1<<j) <= nax; i++)
			st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
	rep(i,0,q) {
		int L, R;
		cin >> L >> R;
		--L;
		--R;
		// answer query using sparse tables
		int j = logs[R - L + 1];
		cout << min(st[L][j], st[R - (1 << j) + 1][j]) << '\n';
		
	}
	return 0;
}

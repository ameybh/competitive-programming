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
	int n, x;
	cin >> n >> x;
	vector< int > a(n);
	map<int,vector< int > > mp;
	rep(i,0,n) {
		cin >> a[i];
		mp[a[i]].pb(i);
	}
	rep(i,0,n) {
		rep(j,i+1,n) {
			if (i != j) {
				int s = a[i]+a[j];
				if (mp.count(x-s))  {
					int z = x-s;
					int c = 0;
					while (c < (int)mp[z].size() && (mp[z][c] == i || mp[z][c] == j)) {
						++c;
					}
					if (c == (int)mp[z].size()) continue;
					int r = mp[z][c];
					cout << i+1 << ' ' << j+1 << ' ' << r+1;
					exit(0);
				}
			}
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}

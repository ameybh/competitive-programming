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
const int nax = 1e6+5;
const int INF = 2e9;
vector< int > steps(nax + 10, INF);
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);	
	int n; cin >> n;
	steps[0] = 0;
	rep(i,1,10) steps[i] = 1;
	rep(i,10,nax) {
		int x = i;
		while (x) {
			int d = x % 10;
			x /= 10;
			if (d == 0) continue;
			steps[i] = min(steps[i], 1 + steps[i-d]);
		}
	}
	cout << steps[n];
	return 0;
}

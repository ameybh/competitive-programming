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
	int n, k;
	cin >> n >> k;
	vector< int > a(2*n + 1);
	for (auto& e:a) cin >> e;
	rep(i,1,2*n) {
		if (k == 0) break;
		if (a[i]-a[i-1] > 1 && a[i]-a[i+1] > 1) {
			a[i]--;
			k--;
		}
	}
	for (auto& e:a) cout << e << ' ';
	return 0;
}
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
	
	int n, l;
	cin >> n >> l;
	vector< double > a(n);
	for (auto& e:a) cin >> e;
	sort(all(a));
	auto it = unique(all(a));
	a.resize(distance(a.begin(),it));
	double ans = 0;
	rep(i,1,n) {
		ans = max(ans, a[i]-a[i-1]);
	}
	ans = max(ans/2, max(a[0]-0, l-a[n-1]));
	cout << fixed << setprecision(12) << ans;
	return 0;
}
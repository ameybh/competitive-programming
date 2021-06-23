// Author: Amey Bhavsar - AB - ameybhavsar24@github
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
	int n, a, b;
	cin >> n >> a >> b;
	vector< int > c(n);
	for (auto& e:c) cin >> e;
	sort(all(c), greater< int >() );
	if (a > b) {
		swap(a,b);
	}
	double sa = 0, sb = 0;
	rep(i,0,a) {
		sa += c[i];
	}
	rep(i,a,a+b) {
		sb += c[i];
	}
	cout << fixed << setprecision(9) << (sa/(double)a) + (sb/(double)b) << '\n';
	return 0;
}
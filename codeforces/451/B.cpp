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
	
	int n;
	cin >> n;
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	
	int l = 0;
	while (l+1 < n && a[l] < a[l+1])
		++l;
	int r = l+1;
	while (r < n && a[r] < a[r-1])
		++r;
	reverse(a.begin()+l, a.begin()+r);
	if (is_sorted(all(a))) {
		cout << "yes\n";
		cout << l+1 << ' ' << r << '\n';
	} else {
		cout << "no\n";
	}
	return 0;
}
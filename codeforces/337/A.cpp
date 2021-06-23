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

const int INF = 5000;

void mins(int& a, int b) {
	a = min(a, b);
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector< int > a(m);
	for (auto& e:a) cin >> e;
	
	sort(all(a));
	
	int ans = INF;
	for (int i=0; i+n-1 < m; i++) {
		mins(ans, a[i+n-1] - a[i]);
	}
	cout << ans << '\n';
	
	return 0;
}
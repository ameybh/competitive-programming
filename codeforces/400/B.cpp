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
	
	int n, m;
	cin >> n >> m;
	// int ans = 0;
	set< int > cnt;
	rep(i,0,n) {
		string s;
		cin >> s;
		int gpos = find(all(s), 'G') - s.begin();
		int spos = find(all(s), 'S') - s.begin();
		if (gpos > spos) {
			cout << -1;
			return 0;
		}
		// ans = max(ans, spos - gpos-1);
		cnt.insert(spos-gpos-1);
	}
	cout << (int)cnt.size() << '\n';
	return 0;
}
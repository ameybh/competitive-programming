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
	int n, ans = 0;
	cin >> n;
	stack< int > s;
	rep(i,0,n) {
		int l, h;
		cin >> l >> h;
		if (s.empty()) {
			ans++;
			s.push(h);
			continue;
		}
		if (s.top() == h) {
			continue;
		}
		if (s.top() > h) {
			while (!s.empty() && s.top() > h) {
				s.pop();
			}
			if (!s.empty() && s.top() == h) {
				continue;
			}
		}
		ans++;
		s.push(h);
	}
	cout << ans << '\n';
	return 0;
}

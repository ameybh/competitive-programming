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
	string z;
	cin >> z;
	int r = count_if (all(z), [&](char x) {return x == 'R';});
	int l = count_if (all(z), [&](char x) {return x == 'L';});
	if (r == 0) {
		int s = (int)z.size()-1, t = 0;
		for (; s>=0; s--) {
			if (z[s] == 'L') break;
		}
		for (; t<(int)z.size(); t++) {
			if (z[t] == 'L') break;
		}
		cout << s+1 << ' ' << t << '\n';
	} else if (l == 0) {
		int s = (int)z.size()-1, t = 0;
		for (; s>=0; s--) {
			if (z[s] == 'R') break;
		}
		for (; t<(int)z.size(); t++) {
			if (z[t] == 'R') break;
		}
		swap(s, t);
		cout << s+1 << ' ' << t+2 << '\n';
	} else {
		int s = 0, t = 0;
		for (;s<(int)z.size(); s++) {
			if (z[s] == 'R')break;
		}
		for (t = s+1;t<(int)z.size(); t++) {
			if (z[t] == 'L') break;
		}
		cout << s+1 << ' ' << t << '\n';
	}
	return 0;
}
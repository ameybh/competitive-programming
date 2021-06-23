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
	string s;
	cin >> s;
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	
	int minTime = INT_MAX;
	
	rep(i,0,n-1) {
		if (s[i] == 'R' && s[i+1] == 'L') {
			minTime = min(minTime, (a[i]+a[i+1])/2 - a[i]);
		}
	}
	cout << (minTime == INT_MAX ? -1 : minTime);
	
	return 0;
}
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
	int n, m;
	cin >> n >> m;
	vector< int > debt(n);
	rep(i,0,m) {
		int a, b, c;
		cin >> a >> b >> c;
		--a;
		--b;
		debt[a]+=c;
		debt[b]-=c;
	}
	auto lambda = [&] (int sum, int val) { return val > 0 ? sum+val : sum; };
	cout << accumulate(all(debt), 0, lambda);
	return 0;
}
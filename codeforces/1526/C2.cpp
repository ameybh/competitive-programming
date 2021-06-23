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
	priority_queue< ll, vector< ll >, greater< ll > > q;
	ll s = 0;
	rep(i,0,n) {
		ll x;
		cin >> x;
		s += x;
		q.push(x);
		while (s < 0) {
			s -= q.top();
			q.pop();
		}
	}
	cout << (int) q.size();
	return 0;
}
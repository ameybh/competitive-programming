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

void solve() {
	int n;
	cin >> n;
	vector< int > a(n);
	for (auto& e:a) cin >> e;
	vector< int > b(n);
	b = a;
	vector< int > c = a;
	for (auto& e:c) e = -1*e;
	vector< pair< int, pair<int,int>> > moves;
	
	for (int i=0; i<n; i+=2) {
		b[i]+=b[i+1];
		moves.pb({1, {i+1, i+2}});
		b[i]+=b[i+1];
		moves.pb({1, {i+1, i+2}});
		
		b[i+1] -= b[i];
		moves.pb({2, {i+1, i+2}});
		
		b[i] += b[i+1];
		moves.pb({1, {i+1, i+2}});
		b[i] += b[i+1];
		moves.pb({1, {i+1, i+2}});
		
		b[i+1] -= b[i];
		moves.pb({2, {i+1, i+2}});
	}
	
	cout << (int)moves.size() << '\n';
	for (auto& e:moves) {
		cout << e.ff << ' ' << e.ss.ff << ' ' << e.ss.ss << '\n';
	}
	// for (auto& e:b) cout << e << ' ';
	// cout << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
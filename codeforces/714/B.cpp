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
	set< int > s;
	rep(i,0,n) {
		int x;
		cin >> x;
		s.insert(x);
	}
	
	if ((int)s.size() <= 2) {
		cout << "YES\n";
		return 0;
	}
	if ((int)s.size() > 3) {
		cout << "NO\n";
		return 0;
	}
	auto it = s.begin();
	int a = *it;
	it++;
	int b = *it;
	it++;
	int c = *it;
	cout << (a+c == 2*b ? "YES" : "NO") << '\n';
	return 0;
}
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
	vector< int > freq(1e3 + 10);
	rep(i,0,n) {
		int x;
		cin >> x;
		freq[x]++;
	}
	
	cout << (*max_element(freq.begin(), freq.end()) <= (n+1)/2 ? "YES" : "NO");
	
	
	return 0;
}
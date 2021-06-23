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
	
	string s;
	cin >> s;
	
	if (s == "0") {
		cout << 0 << '\n';
		return 0;
	}
	
	bool pow2 = (1 == count_if(all(s), [&] (char x) {return x == '1';}));
	int l = s.size();
	cout << (pow2 ? l/2 : (l+1)/2);
	
	
	return 0;
}
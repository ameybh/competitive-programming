#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}



bool isv(char x) {
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		return true;
	return false;
}




int main() {
	// your code goes here
	
	ll t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;
	    int n = s.size();
	    int ans = 0;
	    for (int i=n-1;i>=0; i--) {
			if (!isv(s[i])) {
				ans += fe(2,n-i-1);
			}
		}
		cout << ans << "\n";
	}
	
	return 0;
}

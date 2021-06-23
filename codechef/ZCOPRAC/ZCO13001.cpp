// #include "/home/amey/stdc++.h"
#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <cmath>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	// n*logn approach
	vector<ll> s;
	rep(i,0,n) {
		ll x;
		cin >> x;
		s.pb(x);
	}
	sort(s.begin(), s.end());
	ll answer=0,diff_i=0;
	rep(i,1,n) {
		diff_i += (i)*(s[i]-s[i-1]);
		answer += diff_i;
		// cout << "i: " << i << " diff_i: " << diff_i << " ans: " << answer << "\n";
	}
	cout << answer << "\n";
	

	/*n^2 approach
	vector<ll> s;
	rep(i,0,n) {
		ll x;
		cin >> x;
		s.pb(x);
	}
	ll rev = 0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n;j++) {
			rev+=abs(s[i]-s[j]);
		}
	}
	cout << rev << "\n";*/
	return 0;
}
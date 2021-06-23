// #include "/home/amey/stdc++.h"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vector<ll> budgets;
	rep(i,0,n) {
		ll x;
		cin >> x;
		budgets.pb(x);
	}
	sort(budgets.begin(), budgets.end());
	ll revenue = 0;
	for(ll j=n-1;j>=0;j--) {
		ll i=n-j;
		
				revenue = max(revenue,budgets[j]*i);
		
	}
	cout << revenue << "\n";
	return 0;
}
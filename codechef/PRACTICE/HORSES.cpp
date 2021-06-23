#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

#define rep(n) for(ll i=0; i<n; i++)


int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		int nums[n];
		rep(n) {
			cin >> nums[i];
		}
		
		sort(nums,nums+n);
		int minDiff = INT_MAX;
		rep(n-1) {
			
			minDiff = min(minDiff, abs(nums[i]-nums[i+1]));
			// cout <<  nums[i] << " " << nums[i+1] << " " << minDiff << "\n";
		}
		cout << minDiff << "\n";
	}
	return 0;
}
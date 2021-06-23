// hit.cpp
#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i=0; i<n; i++)
#define pb push_back 

int main() {

	int t;
	cin >> t;
	while(t--) {
		vector<int> nums;
		int n;
		cin >> n;
		rep(n) {
			int x;
			cin >> x;
			nums.pb(x);
		}
		sort(nums.begin(), nums.end());
		
		cout << "\n";
		int x,y,z;
		n--;
		if((nums[n/4+1] != nums[n/4]) && (nums[(2*n)/4+1] != nums[(2*n)/4]) && (nums[(3*n)/4]) != nums[(3*n)/4+1])  {
			cout << nums[n/4 + 1] << " " << nums[(2*n)/4 + 1] << " " << nums[(3*n)/4 + 1] << "\n";
		}
		else {
			cout << -1 << "\n";
		}

	}

	return 0;
}
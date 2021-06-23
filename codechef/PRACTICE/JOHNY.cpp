// johny.cpp
#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i=0; i<n; i++)

int binSearch(vector<int> nums, int l, int r, int x) {
	if(r>=l) {
		int mid = l + (r-l)/2;
		if(nums[mid]>x) {
			return binSearch(nums,l,mid-1,x);
		}
		else if(nums[mid]<x) {
			return binSearch(nums,mid+1,r,x);
		}
		return mid;
	}	
	return -1;
}

int main() {

	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n;
		vector<int> nums;
		rep(n) {
			int x;
			cin >> x;
			nums.push_back(x);
		}
		cin >> k;
		int kth = nums[k-1];
		sort(nums.begin(), nums.end());
		cout << binSearch(nums,0,n-1,kth)+1 << "\n";
	}

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;


int getOccurence(vector<int> nums, int y) {
	int c=0;
	int size = nums.size();
	for(int i=0; i<nums.size(); i++) {
		if(nums[i] == y) {
			c++;
		}
	}
	return c;
}

int backLinearSearch(vector<int> nums, int x) {
	int size = nums.size()-2;
	for(int i=size; i>=0; i--) {
		if(nums[i] == x) {
			return i;
		}
	}
	return -1;
}

vector<int> getSeq(int n) {
	vector<int> nums;
	nums.push_back(0);
	for(int i=1; i<n; i++) {
		int s = backLinearSearch(nums,nums[i-1]);
		if(s!=-1) {
			nums.push_back(i-s-1);
		}
		else {
			nums.push_back(0);
		}
	}
	return nums;
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		vector<int> seq = getSeq(n);		
		int ans = getOccurence(seq,seq[n-1]);
		//for(int i=0; i<n; i++) {
		//	cout << seq[i] << ",";
		//}
		cout << ans << "\n";
	}
	
	return 0;
}
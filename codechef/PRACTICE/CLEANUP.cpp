// cleanup.cpp
#include <bits/stdc++.h>
using namespace std;

bool found(vector<int> nums, int x) {
	vector<int>::iterator it;
	it = find(nums.begin(), nums.end(), x);
	if(it!=nums.end()) 
		return true;
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		vector<int> completed;
		for(int i=0; i<m; i++) {
			int x;
			cin >> x;
			completed.push_back(x);
		}
		sort(completed.begin(), completed.end());
		bool chef = true;
		vector<int> ch,as;
		for(int i=1;i<=n;i++) {
			if(!found(completed,i))
				if(chef) {
					ch.push_back(i);
					chef = false;
				}
				else {
					as.push_back(i);
					chef = true;
				}
		}
		for(int i=0; i<ch.size(); i++) {
			cout << ch[i] << " ";
		}
		cout << "\n";
		for(int i=0; i<as.size(); i++) {
			cout << as[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
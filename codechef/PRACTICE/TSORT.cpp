# include <bits/stdc++.h>
#define loop(x,n) for(int x = 0; x < n; ++x)



using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> nums;
    while(t--) {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    sort(nums.begin(),nums.end());
    for(auto i=nums.begin();i!=nums.end();i++) {
        cout << *i << "\n";
    }
	
	return 0;
}

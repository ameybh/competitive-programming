#include <bits/stdc++.h>
using namespace std;

#define ll long long

int x,y,k,n,t;
void solution() {
	cin >> x >> y >> k >> n;
	int m = x-y;
	
	vector<pair<int,int>> arr(n);
	for (int i=0; i<n; i++) {
		cin >> arr[i].second >> arr[i].first;
	}
	sort(arr.begin(),arr.end());
	for (auto& e:arr) {
		if (e.first <= k && e.second >= m) {
			cout << "LuckyChef\n";
			return;
		}
	}
	cout << "UnluckyChef\n";
}

int main() {
	
	cin >> t;
	while(t--)
		solution();
	
	
}

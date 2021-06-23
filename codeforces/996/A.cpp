#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	
	
	int n;
	cin >> n;
	int ans = 0;
	vector<int> v = {100,20,10,5,1};
	for (auto& f : v) {
		if (n >= f) {
			int p = n/f;
			ans += p;
			n -= f*p;
		}
	}
	
	
	cout << ans << "\n";
	
	
	
	
	
	
	return 0;
}
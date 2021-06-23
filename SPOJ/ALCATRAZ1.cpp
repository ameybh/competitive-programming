#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		unsigned long long ans = 0;
		for (auto& e:s) {
			ans += e-'0';
		}
		cout << ans << "\n";
	}
	return 0;
}
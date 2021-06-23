#include <bits/stdc++.h>
using namespace std;

#define ll long long
void sol() {
	int n;
	cin >> n;
	vector<int> a(2*n);
	vector<int> vst(n+1,false);
	vector<int> ans;
	for (auto& e:a) cin >> e;
	for (auto& e:a) {
		if (!vst[e]) {
			vst[e] = 1;
			ans.emplace_back(e);
		}
	}
	for (auto& e:ans)
		cout << e << " ";
	cout << "\n";
}
int main() {
	int t;
	cin >> t;
	while (t--)
		sol();
	return 0;
}
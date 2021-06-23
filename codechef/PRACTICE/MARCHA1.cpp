#include <bits/stdc++.h>
using namespace std;

#define ll long long

int t,n,m;
void solution() {
	cin >> n >> m;
	vector<int> w(n);
	for (int i=0; i<n; i++) {
		cin >> w[i];
	}
	for (int i=1;i<(1<<n);i++) {
		vector<int> subset;
		for (int j=0; j<n; j++) {
			if (i&(1<<j))
				subset.push_back(j);
		}
		int s = 0;
		for (int j=0; j<(int)subset.size();j++) {
			s += w[subset[j]];
		}
		if (s == m) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
	return;
}

int main() {
	
	cin >> t;
	while(t--)
		solution();
	
	
}

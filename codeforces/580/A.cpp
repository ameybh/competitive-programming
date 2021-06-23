#include <bits/stdc++.h>


#define pb push_back

using namespace std;

int main() {
	// your code goes here
	
	long long t;
	cin >> t;
	vector<long long> n;
	for(long long i=0; i<t;i++) {
		long long x;
		cin >> x;
		n.pb(x);
	}
	long long maxLen=0;
	for(long long i=0; i<t-1;i++) {
		if(n[i]<=n[i+1]) {
			maxLen++;
		}
		if(n[i]<=n[i+1] && i==t-2) {
			maxLen++;
		}
		else {
			maxLen=max(maxLen,1LL);
		}
	}
	cout << maxLen;
	return 0;
}
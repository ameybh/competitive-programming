#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
int main() {
	cin >> n;
	vector<int> a(n), b(2*n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int ii = 0;
	for (int i=0; i<n; i+=2) {
		b[ii] = a[i];
		ii++;
	}
	for (int i=1; i<n; i+=2) {
		b[ii] = a[i];
		ii++;
	}
	for (int i=0; i<n; i++) {
		b[i+n] = b[i];
	}
	
	// for (auto& e:b) {
		// cout << e << " ";
	// }
	// cout << "\n";
	
	ll sum = 0, mxSum = 0;
	for (int i=0; i<(n+1)/2; i++) {
		sum+=b[i];
	}
	mxSum = max(mxSum,sum);
	for (int i=1; i<2*n-(n+1)/2; i++) {
		sum -= b[i-1];
		sum += b[i+(n+1)/2-1];
		mxSum = max(mxSum,sum);	
	}
	
	cout << mxSum << "\n";
	
	
	
	
	
	return 0;
}
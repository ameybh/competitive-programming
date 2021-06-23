#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
    	int d;
    	cin >> d;
    	cout << 2*d << "\n" << string(d,'a') + string(d,'b') << "\n";
	}
	
	return 0;
}

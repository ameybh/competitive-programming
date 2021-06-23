#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    cout << max(a,b) << " " << a+b << "\n";
	}
	return 0;
}

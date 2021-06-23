#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while (t--) 
	{
	    int n;
	    cin >> n;
	    int a[n], b[n];
	    ll as = 0, bs = 0;
	    for (int i=0; i<n; i++) {
	        cin >> a[i];
	        as += a[i];
	    }
	    for (int i=0; i<n; i++) {
	        cin >> b[i];
	        bs += b[i];
	    }
	    
	    as -= *max_element(a,a+n);
	    bs -= *max_element(b,b+n);
	    
	    if (as < bs) {
	        cout << "Alice\n";
	    }
	    else if (as == bs) {
	        cout << "Draw\n";
	    }
	    else {
	        cout << "Bob\n";
	    }
	}
	
	return 0;
}

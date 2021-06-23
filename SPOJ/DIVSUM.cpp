#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ull t;
    cin >> t;
    while(t--) {
    	ull n;
    	cin >> n;
    	ull sum=0;
    	int i;
    	for(i=1; i*i<n; i++) {
    		if(n%i == 0) {
    			sum+=i+n/i;
    		}
    	}
    	if(i*i == n) {
    		sum+=i;
    	}
    	sum-=n;
    	
    	
    	cout << sum << "\n";
    }
    
    
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
    	int n,k,i;
    	cin >> n >> k;
    	// TODO take n inputs
    	int p[n];
    	for(i=0;i<n; i++) {
    		cin >> p[i];
    	}
    	bool ok = true;
    	
    	for(i=0; i<n; i++) {
    		int tremain = p[i]-k;
    		ok &= tremain>=0;
    		if(!ok) {
    			break;
    		}
    		p[i+1]+=tremain;
    	}
    	if(ok) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO " << i+1 << "\n";
    	}
    }
    
    
	// your code goes here
	return 0;
}
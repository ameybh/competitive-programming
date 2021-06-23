#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long int n;
	    cin >> n;
	    long long int tri[n][n];
	    
	    for(int i=1;i<=n;i++) {
	        for(int j=0;j<i;j++) {
	            int x;
	            cin >> x;
	            tri[i-1][j] = x;
	        }
	    }
	    
	    
	    
	    for(int i=n-1;i>0;i--) {
	        for (int j=0;j<i; j++) {
	            if(tri[i][j]>=tri[i][j+1]) {
	                tri[i-1][j] += tri[i][j];
	            }
	            else {
	                tri[i-1][j] += tri[i][j+1];
	            }
	        }
	    }
	    cout << tri[0][0] << "\n";
	    
	}
	return 0;
}

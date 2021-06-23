#include <iostream>
using namespace std;


int gcdfun(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcdfun(b, a % b);  
      
} 
   

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int ar[n];
	    for(int k=0; k<n; k++) {
	        int x;
	        cin >> x;
	        ar[k] = x;
	    }
	    int gcd = ar[0];
	    for(int i=1;i<n;i++) {
	        if(gcd>=ar[i]) {
	        gcd = gcdfun(gcd, ar[i]);
	        }
	        else {
	        gcd = gcdfun(ar[i], gcd);
	        }
	    }
	    for(int j=0;j<n; j++) {
	        cout << ar[j]/gcd << " ";
	    }
	    cout << "\n";
	}
	return 0;
}

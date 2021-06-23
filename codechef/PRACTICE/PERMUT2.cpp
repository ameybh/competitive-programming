#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int l;
	cin >> l;
	while(l!=0) {
	    
	    int n[l],newN[l];
	    for(int i=1; i <=l; i++) {
	        int x;
	        cin >> x;
	        n[i-1] = x;
	        newN[x-1] = i;
	    }
	    
	   // for(int j=0;j<l;j++) {
	   //     cout << newN[j] << " ";
	   // }
	    int f=0;
	    for(int k=0;k<l;k++) {
	        if(newN[k]!=n[k]) {
	            f=1;
	            break;
	        }
	    }
	    if(!f) {
	        cout << "ambiguous\n";
	    }
	    else {
	        cout << "not ambiguous\n";
	    }
	   
	    
	    cin >> l;
	}
	return 0;
}

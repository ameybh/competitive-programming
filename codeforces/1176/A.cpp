#include <iostream>
using namespace std;


int getMoves(long int n) {
    int moves=0;
  
    
    while( n%2==0 || n%3==0 || n%5==0) {
        if(n!=1) {
        
        if(n%2==0) {
            n=n/2;
            moves++;
        }
        else if(n%3==0) {
            n=(2*n)/3;
            moves++;
        }
        else {
            n=(4*n)/5;
            moves++;
        }
        
        
        }
    }
    
    if(n==1) {
        return moves;
    }
    else {
        return -1;
    }
    
    return moves;
}

int main() {
	int q;
	cin>>q;
	while(q>0) {
	    
	    long int n;
	    cin>>n;
	    
	    int moves  = getMoves(n);
	    
	    cout<<moves;
	    q--;
	    if(q!=0) {
	        cout<<endl;
	    }
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	int e=0,o=0;
	for(int i=0;i<n;i++) {
	    int x;
	    cin >> x;
	    if(x & 1) {
	        o++;
	    }
	    else {
	        e++;
	    }
	}
	
	if(e>o) {
	    cout << "READY FOR BATTLE\n";
	}
	else {
	    cout << "NOT READY\n";
	}
	
	return 0;
}

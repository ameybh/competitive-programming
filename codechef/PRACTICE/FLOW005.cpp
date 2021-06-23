#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int notes[6] = {100,50,10,5,2,1};
	int t;
	cin >> t;
	while(t--) {
	    int p;
	    cin >> p;
	    int c=0;
	    int i=0;
	    while(p) {
	        if(p>=notes[i]) {
	            p-=notes[i];
	            c++;
	        }
	        else {
	            i++;
	        }
	    }
	    cout << c << "\n";
	}
	return 0;
}

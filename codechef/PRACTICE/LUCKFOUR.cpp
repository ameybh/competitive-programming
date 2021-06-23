#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
	    int count=0;
	    string s;
	    cin >> s;
	    
	    for(char &c:s) {
	       if(c=='4') {
	       count++;
	       }
	    }
	    
	   cout << count << "\n";
	}
	return 0;
}

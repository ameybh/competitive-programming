#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    string output;
	    if(a<b) {
	        output = "<";
	    }
	    else if(a>b) {
	        output =  ">";
	    }
	    else {
	        output = "=";
	    }
	    cout << output << "\n";
	}
	return 0;
}

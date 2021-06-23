#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int f=0;
	    int s_size = s.size();
	    for(int i=0;i<s_size;i++) {
	        if(s[i] != s[s_size-i-1]) {
	            f=1;
	            break;
	        }
	    }
	    if(!f) {
	        cout << "wins\n";
	    }
	    else {
	        cout << "losses\n";
	    }
	}
	return 0;
}

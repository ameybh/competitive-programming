#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int sumA=0,sumB=0,lead=0,leadPlayer=0;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    sumA+=a;
	    sumB+=b;
	    int tlead = abs(sumA-sumB);
	    if(tlead>lead) {
	        lead = tlead;
	        if(sumA>sumB) {
	            leadPlayer = 1;
	        }
	        else {
	            leadPlayer = 2;
	        }
	    }

	}
	cout << leadPlayer << " " <<  lead;
	return 0;
}

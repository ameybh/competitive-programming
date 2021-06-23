#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		//task
		int l,c,h,w;
		cin >> l >> c >> h >> w;
		// l = l*3 + 1;
		// c = c*3 + 1;
		l = l+1+l*h;
		c = c+1+c*w;
		for(int i=0; i<l; i++) {
			for(int j=0; j<c; j++) {
				if(i==0 || j==0 || i==l-1 || j==c-1) {
					cout << "*";
				}
				else if(j%(w+1)==0) {
					cout << "*";
				}
				else if(i%(h+1)==0) {
					cout << "*";
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}

		cout<<"\n\n";
	}
	
	return 0;
}


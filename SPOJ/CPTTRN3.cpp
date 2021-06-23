// cpptrn3.cpp
// tested locally - OK
#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int r,c;
		cin >> r >> c;
		r = r*3 + 1;
		c = c*3 + 1;

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {

				if(i%3 == 0 || j%3 == 0) {
					cout << "*";
				}
				else {
						cout << ".";
					}
			}
			cout << "\n";
		}

		cout << "\n\n";
	}
	
	return 0;
}
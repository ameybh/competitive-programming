// cpptrn2.cpp

#include <iostream>

using namespace std;
int main() {

	int t;
	cin >> t;

	while(t--) {
		int r,c;
		cin >> r >> c;

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				if(i==0 || i==r-1) {
					cout << "*";
				}
				else if(j==0 || j==c-1) {
					cout << "*";
				}
				else {
					cout << ".";
				}
			}

			cout << "\n";
		}

	}

}
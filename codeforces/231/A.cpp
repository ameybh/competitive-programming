#include <iostream>
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		int x,y,z;
		cin >> x >> y >> z;
		if (x+y+z > 1)
			count++;
	}    
	cout << count << "\n";
    return 0;
}
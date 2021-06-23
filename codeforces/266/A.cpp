#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	string color;
	cin >> color;
	int c=0;
	for(int i=0;i<color.size()-1;i++) {
		if(color[i+1]==color[i]) {
			
			c++;		
		}
	}
	cout << c;
	
	
	

	return 0;
}
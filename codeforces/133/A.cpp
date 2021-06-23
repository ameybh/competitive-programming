#include<bits/stdc++.h>
using namespace std;

int main() {
	string c;
	getline(cin,c);
	bool b = true;
	for (auto i:c) {
		if(i=='H' || i=='Q' || i=='9'){cout << "YES"; b=false;break;}
	}
	if(b) cout << "NO";
	
	return 0;
}
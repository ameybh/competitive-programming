#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tram = 0;
	int n,m=0;
	cin >> n;
	
	while(n--) {
		int ex,en;
		cin >> ex >> en;
		tram-=ex;
		tram+=en;
		m=max(m,tram);
	}
	cout << m;
	
	return 0;	
}
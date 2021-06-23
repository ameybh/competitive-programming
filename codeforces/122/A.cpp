#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int lucky[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	
	int n;
	cin >> n;
	bool ok = false;
	for (int i=0; i<14; i++) {
		ok |= n%lucky[i] == 0;
		if(ok) break;
	}
	if(ok) cout << "YES";
	else cout << "NO";
	
	return 0;
}
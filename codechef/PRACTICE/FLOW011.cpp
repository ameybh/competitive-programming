#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	 int b;
	 cin >> b;
	 float g=b;
	 if (b<1500) {
	     g+=b;
	 }
	 else {
	     g += 500 + 0.98*b;
	 }
	 
	cout << fixed << setprecision(2) << g << "\n";
}
	return 0;
}

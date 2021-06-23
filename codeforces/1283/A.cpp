#include <iostream>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(ll i=a; i<b i++)
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair



int mint(int hh, int mm) {
	int timeDone = hh*60 + mm;
	return 24*60 - timeDone;
}

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		int hh,mm;
		cin >> hh >> mm;
		cout << mint(hh,mm) << "\n";
	}
	return 0;
}
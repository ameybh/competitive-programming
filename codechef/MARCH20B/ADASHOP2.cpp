// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef MARCH20B 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define bpc(x) __builtin_popcount(x) 


void solution() {
	int x,y;
	cin >> x >> y;
	//int c=0;
	if(x==y && x!=1 && y!=1) {
		cout << 20 << "\n";
		cout << "1 1\n";
		//c++;
	}
	else if(x==1 && y==1) {
		cout << 19 << "\n";
	}
	else {
		int avg = (x+y)/2;
		cout << 21 << "\n";
		cout << avg << " " << avg << "\n";
		cout << "1 1\n";
		//c+=2;
	}
	
	cout << "7 7\n";
	cout << "8 6\n";
	cout << "3 1\n";
	cout << "1 3\n";
	cout << "5 7\n";
	cout << "8 4\n";
	cout << "5 1\n";
	cout << "1 5\n";
	cout << "3 7\n";
	cout << "8 2\n";
	cout << "7 1\n";
	cout << "1 7\n";
	cout << "2 8\n";
	cout << "3 7\n";
	cout << "4 8\n";
	cout << "5 7\n";
	cout << "6 8\n";
	cout << "7 7\n";
	cout << "8 8\n";
	
	//c+=33;
	////cout << 33 << "\n";
	//cout << c << "\n";
	//cout << "2 2\n";
	//cout << "1 3\n";
	//cout << "4 2\n";
	//cout << "5 1\n";
	//cout << "6 2\n";
	//cout << "7 1\n";
	//cout << "8 2\n";
	//cout << "7 3\n";
	//cout << "8 4\n";
	//cout << "7 5\n";
	//cout << "8 6\n";
	//cout << "7 7\n";
	//cout << "6 8\n";
	//cout << "5 7\n";
	//cout << "4 8\n";
	//cout << "3 7\n";
	//cout << "2 8\n";
	//cout << "1 7\n";
	//cout << "2 6\n";
	//cout << "1 5\n";
	//cout << "2 4\n";
	//cout << "1 3\n";
	//cout << "2 2\n";
	//cout << "3 3\n";
	//cout << "4 4\n";
	//cout << "5 3\n";
	//cout << "6 4\n";
	//cout << "5 5\n";
	//cout << "6 6\n";
	//cout << "5 5\n";
	//cout << "4 6\n";
	//cout << "3 5\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

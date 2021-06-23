// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

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


int gv(int t, int  u) {
	return t*10 + u;
}

void solution() {
	//cout << "HelloWorld!\n";
	
	int a,b;
	cin >> a >> b;
	int a1 = (a - a)/10,a2 = a,b1 = (b-b)/10,b2 = b;
	if (a1<0) a1=0;
	if (a2<0) a2=0;
	if (b1<0) b1=0;
	
	if (b2<0) b2=0;
	
	//cout << a1 << " " << a2 << " " << b1 << " " << b2 << "\n";
	
	int s1 = a+b;
	
	if (a1 == 0 || b1 == 0) {
		//first digit is 0
		if (a1 == 0 && b1 != 0) {
			int s2 = b1 + gv(a2,b2);
			int s3 = b2 + gv(b1,a2);
			cout << max(s1,max(s2,s3)) << "\n";
		}
		else if (a1 != 0 && b1 == 0) {
			int s2 = a1 + gv(b2,a2);
			int s3 = a2 + gv(a1,b2);
			cout << max(s1,max(s2,s3)) << "\n";
		}
		else {
			cout << s1 << "\n";
		}
	}
	else {
		int s2 = gv(a1,b1) + gv(a2,b2);
		int s3 = gv(a1,b2) + gv(b1,a2);
		int s4 = gv(b1,a2) + gv(a1,b2);
		int s5 = gv(b2,a2) + gv(b1,a1);
		cout << max(a1, max(s2, max(s3, max(s4,s5)))) << "\n";
	}
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}

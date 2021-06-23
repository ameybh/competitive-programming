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

char r1[] = {'q','w','e','r','t','y','u','i','o','p'};
char r2[] = {'a','s','d','f','g','h','j','k','l',';'};
char r3[] = {'z','x','c','v','b','n','m',',','.','/'};

int lsr(char x, char arr[]) {
	
	rep(i,0,10) {
		if (arr[i]==x) return i;
	}
	return -1;
}


int main() {
	FASTIO
	
	
	char dir;
	cin >> dir;
	
	string s;
	cin >> s;
	
	int n = (int) s.size();
	rep(i,0,n) {
		int l1=lsr(s[i],r1), l2=lsr(s[i],r2), l3=lsr(s[i],r3);
		if(l1 >=0) {
			if(dir=='R') cout << r1[l1-1];
			else cout << r1[l1+1];
			continue;
		}
		if(l2 >=0) {
			if(dir=='R') cout << r2[l2-1];
			else cout << r2[l2+1];
			continue;
		}
		if(l3 >=0) {
			if(dir=='R') cout << r3[l3-1];
			else cout << r3[l3+1];
			continue;
		}
	}
	
	
	
	return 0;
}
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


void solution() {
	
	ll  n;
	cin >> n;
	
	string x;
	cin >> x;
	string a = "", b ="";
	
	//ll va = 0, vb = 0;
	ll diff = 0;
	// diff > 0 means a is larger
	// else b is larger
	rep(i,0,n) { 
		
		ll pw = n-i;
		
		if (i==0) {
			a+='1';
			b+='1';
		}
		else {
			if (x[i] == '0') {
				a+= '0';
				b+= '0';
			}
			else if (x[i] == '1') {
				//ll va1 = va + (ll)pow(3,pw) ,vb1 = vb + (ll)pow(3,pw);
				//if (max(va,vb1) < max (va1, vb)) {
				if (diff > 0) {			
					a+='0';
					b+='1';
					//vb+= (ll)pow(3,pw);
					diff -= (ll)pow(3,pw); 
				}
				else {
					//va+=(ll)pow(3,pw);
					diff += (ll)pow(3,pw);
					a+='1';
					b+='0';
				}
			}
			else {
				// x[i] is 2
				//ll  va2 = va + (ll) 2*pow(3,pw), vb2 = vb + (ll) 2*pow(3,pw);
				
				//a[i] = 0 & b[i] = 2
				//if (max(va,vb2) < max(va2, vb)) {
				if (diff > 0) {	
					a+='0';
					b+='2';
					diff-=(ll)2*pow(3,pw);
				}
				else if (diff < 0) {
					diff +=(ll)2*pow(3,pw);
					a+='2';
					b+='0';
				}
				else {
					a+='1';
					b+='1';
				}
				
				
			}
		}
		
	}
	//cout << va << " " << vb << "\n";
	cout << a << "\n" << b << "\n";
	
		
}


int main() {
	FASTIO
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
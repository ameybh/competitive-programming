// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codeforces

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


bool isPrime (ll n) {
	bool ok = true;
	rep (i,2,floor(sqrt(n)) + 1) ok &= n % i != 0;
	return ok;
}

bool primes (ll x, ll y) {
	ll prePrime = 0;
	ll currPrime = 0;
	rep (i,2,y+1) {
		bool ok = isPrime (i);
		if (ok) {
			prePrime = currPrime;
			currPrime = i;
		}
	}
	if (currPrime == y && prePrime == x) return true;
	return false;
}

int main() {
	FASTIO
	
	ll n, m;
	cin >> n >> m;
		
	if (primes (min (n,m), max (n,m))) cout << "YES";
	else cout <<  "NO";

	return 0;
}
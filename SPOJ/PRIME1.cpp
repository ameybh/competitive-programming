#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1e9;
const int limit = (int)sqrt(MAXN) + 5;
bool primes[limit];
vector< int > ps;

void sieve() {
	memset(primes, 1, sizeof primes);
	primes[0] = 0;
	primes[1] = 0;
	for (int i=2; i<limit; i++) {
		if (primes[i]) {
			for (int j=2*i;j<limit;j+=i) {
				primes[j]=0;
			}
		}
	}
	for (int i=2; i<limit; i++) {
		if (primes[i])
			ps.emplace_back(i);
	}	
	
}

int main() {
	sieve();
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	for (int tt=0; tt<t; tt++) {
		int a,b;
		cin >> a >> b;
		if (a == 1) a++;
		int n = (b-a) + 1;
		
		bool mark[n];
		memset(mark, 1, sizeof mark);
		
		for (auto& p:ps) {
			if (p > b/2) break;
			// find first multiple in range
			int low = (a/p)*p;
			if (low < a) {
				low += p;
			}
			if (low == p) {
				low += p;
			}
			for (int li = low; li <= b; li+=p) mark[li-a]=0;
		}
		vector< int > ans;
		for (int i=a; i<=b; i++) {
			if (mark[i-a]) ans.emplace_back(i);
		}
		
		for (auto& e:ans) {
			cout << e << '\n';
		}
		cout << '\n';
	}	
	return 0;
}

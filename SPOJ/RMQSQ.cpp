// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
const int MAXN = 2e5 + 5;
const int K = 25;
int logs[MAXN + 1];
int st[MAXN + 1][K + 1];
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	// precompute all logarithms
	logs[1] = 0;
	rep(i,2,MAXN) {
		logs[i] = logs[i/2] + 1;
	}
	int N, Q;
	cin >> N;
	rep(i,0,N) {
		cin >> st[i][0]; 
	}
	cin >> Q;
	// precompute sparse table
	rep(j,1,K+1) {
		for (int i=0; i + (1<<j) <= N; i++) {
			st[i][j] = min(st[i][j-1], st[i + (1<<(j-1))][j-1]);
		}
	}
	rep(i,0,Q) {
		int L, R;
		cin >> L >> R;
		// --L; --R;
		int j = logs[R - L + 1];
		cout << min(st[L][j], st[R - (1<<j) + 1][j]) << '\n';
	}
	
	return 0;
}


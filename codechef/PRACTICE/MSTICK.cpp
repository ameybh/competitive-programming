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

const int MAXN = 1e5 + 10;
const int K = 25;
int logs[MAXN + 1];
int stMax[MAXN + 1][K + 1];
int stMin[MAXN + 1][K + 1];

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	logs[1] = 0;
	for (int i = 2; i <= MAXN; i++) {
		logs[i] = logs[i/2] + 1;
	}
	int N;
	cin >> N;
	rep(i,0,N) {
		cin >> stMax[i][0];
		stMin[i][0] = stMax[i][0];
	}
	rep(j,1,K+1) {
		for (int i=0; i + (1<<j) <= N; i++) {
			stMax[i][j] = max(stMax[i][j-1], stMax[i+(1<<(j-1))][j-1]);
			stMin[i][j] = min(stMin[i][j-1], stMin[i+(1<<(j-1))][j-1]);
		}
	}
	int Q;
	cin >> Q;
	rep(i,0,Q) {
		int L, R;
		cin >> L >> R;
		int j = logs[R-L+1];
		int fastestInsideRange = min(stMin[L][j], stMin[R-(1<<j)+1][j]);
		int slowestInsideRange = max(stMax[L][j], stMax[R-(1<<j)+1][j]);
		int slowestOutsideRange = 0;
		if (L > 0) {
			j = logs[L];
			slowestOutsideRange = max(stMax[0][j], stMax[L-(1<<j)][j]);
		}
		if (R < N-1) {
			j = logs[N-R-1];
			slowestOutsideRange = max(slowestOutsideRange, max(stMax[R+1][j], stMax[N-(1<<j)][j]));
		}
		double ans = fastestInsideRange + max(((double)slowestInsideRange-fastestInsideRange)/2, (double)slowestOutsideRange);
		cout << fixed << setprecision(1) << ans << '\n';
	}
	return 0;
}

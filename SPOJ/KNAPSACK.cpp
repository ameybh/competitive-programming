// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001
#define PI 3.141592653589793

vector<int> w,v;

int kn(int n, int s) {
	vector<vector<int>> dp(n+1, vector<int>(s+1,0));
	rep(i,0,n+1) {
		rep(j,0,s+1) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			}
			else if (w[i]<=j) {
				dp[i][j] = max(v[i]+dp[i-1][j-w[i]], dp[i-1][j]);
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][s];
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int s,n;
	cin >> s >> n;
	
	w.assign(n+1,0);
	v.assign(n+1,0);
	
	rep(i,1,n+1) {
		cin >> w[i] >> v[i];
	}
	int ans = kn(n,s);
	cout << ans << "\n";
	return 0;
}



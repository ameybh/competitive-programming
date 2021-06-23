
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces

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

// int n,m,a,d;

// void solution() {
	// cin >> n >> m >> a >> d;
	
	// vector<int> arr = {a,a+d,a+2*d,a+3*d,a+4*d};
	// int l = 5;
	// for (int b = 0; b < (1<<l); b++) {
		// vector<int> subset;
		// for (int i = 0; i < l; i++) {
			// if (b&(1<<i)) {
				// subset.push_back(arr[i]);
				// cout << arr[i] << " ";
			// }
		// }
		// cout << "\n";
	// }
// }


void flip (vector<vector<int>>& b, int r, int c) {
	for (int i=r-1; i<=r+1; i++) {
		for (int j=c-1; j<=c+1; j++) {
			if (i >=0 && i <= 2 && j>=0 && j<=2) {
				b[i][j]++;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	// int t;
	// cin >> t;	
	// while(t--) {
		// solution();
	// }
	
	vector<vector<int>> a(3,vector<int>(3));
	vector<vector<int>> b(3,vector<int>(3,0));
	rep(i,0,3) {
		rep(j,0,3)
			cin >> a[i][j];
	}
	
	rep(i,0,3) {
		rep(j,0,3) {
			if (a[i][j]&1) {
				flip(b,i,j);
			}
		}
	}
	
	rep(i,0,3) {
		rep(j,0,3) {
			if (b[i][j]%2 == 0) {
				cout << 1;
			}
			else
				cout << 0;
		}
		cout << "\n";
	}
	
		
	
	return 0;
}

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
	

bool di (int n) {
	int c[10] = {};
	while (n>0) {
		c[n%10]++;
		if (c[n%10]>1) {
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	// int t;
	// cin >> t;	
	// while(t--) {
		// solution();
	// }
	
	int n;
	cin >> n;
	int i;
	for (i=n+1;!di(i);i++);
	cout << i << "\n";
	
	return 0;
}
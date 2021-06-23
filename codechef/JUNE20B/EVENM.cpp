// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: JUNE20B

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
#define MAXN 1005
int n;
void solution() {
	cin >> n; 
	vector<vector<int>> m(n, vector<int> (n,0));
	
	int x = 1;
	rep(i,0,n) {
		if (i % 2 == 0) {
			rep(j,0,n) {
				m[i][j] = x;
				x++;
			}
		}
		else {
			repD(j,n-1,0) {
				m[i][j] = x;
				x++;
			}
		}
	}
	
	for (auto& r:m) {
		for (auto& c:r) {
			cout << c << " ";
		}
		cout << "\n";
	}
	
	
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

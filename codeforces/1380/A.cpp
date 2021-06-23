// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform:  Educational Codeforces Round 91 (Rated for Div. 2) 

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

int n;
vector<int> a;
void solution() {
	cin >> n;
	a.assign(n, 0);
	
	
	for (auto& e:a) {
		cin >> e;
	}
	
	for (int i=1; i<n-1; i++) {
		bool left = 0, right = 0;
		int l = 0, r=0;
		for (int j=0; j<=i-1; j++) {
			if (a[j] < a[i]) {
				left = 1;
				l = j;
				break;
			}
		}
		
		for (int j=i+1; j<n; j++) {
			if (a[i] > a[j]) {
				right = 1;
				r = j;
				break;
			}
		}
		if (left && right) {
			cout << "YES\n";
			cout << l+1 << " " << i+1 << " " << r+1 << "\n";
			return;
		}
	}
	cout << "NO\n";
	return;
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
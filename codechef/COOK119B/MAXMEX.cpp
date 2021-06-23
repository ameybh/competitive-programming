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


int n,m;
void solution() {
	cin >> n >> m;
	vector<int> a(n);
	for (auto& e:a) {
		cin >> e;
	}
	
	
	sort(all(a));
	int mex = 1;
	for (auto& e:a) {
		if (e == mex) {
			mex++;
		}
	}
	if (mex == m) {
		cout << n << "\n";
		return;
	}
	
	if (m > mex) {
		cout << "-1\n";
		return;
	}
	bool p = false;
	int count = 0;
	rep(i,0,n) {
		if (a[i] == m) {
			p = true;
			// po = i;
			count++;
		}
	}
	if (p) {
		cout << n-count<< "\n";
		return;
	}
	else {
		
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

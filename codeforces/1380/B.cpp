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
// vector<int> a;
void solution() {
	// a.assign(n, 0);
	string s;
	cin >> s;
	n = s.size();
	int r = 0, p = 0, sc = 0;
	rep(i,0,n) {
		switch(s[i]) {
			case 'R' : r++; break;
			case 'P' : p++; break;
			case 'S' : sc++; break;
		}
		// switch(s[i]) {
			// case 'R' : cout << 'P'; break;
			// case 'P' : cout << 'S'; break;
			// case 'S' : cout << 'R'; break;
		// }
	}
	int mx = max(r,max(p,sc));
	if (mx == r) {
		cout << string(n,'P');
	} else if (mx == p) {
		cout << string(n,'S'); 
	}
	else {
		cout << string(n,'R'); 
	}
	cout << "\n";
	
	// cout << string(r,'P') + string(sc,'R') + string(p,'S') << "\n";
	
	
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
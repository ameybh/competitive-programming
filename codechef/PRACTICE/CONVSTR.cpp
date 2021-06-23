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

int n;
//~vector<int> a;
string a,b;
map<char,int> ma, mb;
void solution() {
	ma.clear();
	mb.clear();
	cin >> n >> a >> b;
	
	rep(i,0,n) {
		if (a[i] < b[i]) {
			cout << "-1\n";
			return;
		}
		ma[a[i]]++;
		mb[b[i]]++;
	}
	
	
	for (auto& e : mb) {
		if (ma[e.first] == 0) {
			cout << "-1\n";
			return;
		}
	}
	
	set<char> s;
	rep(i,0,n) {
		if (a[i] != b[i]) {
			s.insert(b[i]);
		}
	}
	
	
	cout << (int) s.size() << "\n";
	
	for (auto it = s.rbegin(); it != s.rend(); it++) {
		set<int> op;
		rep(i,0,n) {
			if (a[i] != b[i] && b[i] == *it) {
				op.insert(i);
			}
		}
		
		rep(i,0,n) {
			if (a[i] == *it) {
				op.insert(i);
			}
		}
		
		cout << (int) op.size() << " ";
		for (auto& e : op)
			cout << e << " ";
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

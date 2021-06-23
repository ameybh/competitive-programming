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



int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s;
	while (1) {
		cin >> s;
		if (s == ".")
			break;
		int n;
		cin >> n;
		if (n == 0)
			continue;
		int k = 0;
		vector<vector<string>> pat;
		while (k < (int) s.size()) {
			vector<string> row(n);
			string ns = string((int)s.size(),'a');
			rep(i,0,(int)s.size()) {
				ns[i] = s[(i+k) % (int)s.size()];
			}
			// cout << ns << "\n";
			rep(i,0,n) {
				row[i] = ns;
			}
			pat.pb(row);
			++k;
		}
		for (auto& r : pat) {
			for (auto& e : r) {
				cout << e;
			}
			cout << "\n";
		}
		
	}
	return 0;
}

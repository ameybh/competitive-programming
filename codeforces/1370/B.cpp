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
void solution() {
	cin >> n;
	vector<int> e, o;
	rep(i,1,2*n+1) {
		int x;
		cin >> x;
		if (x%2)
			o.pb(i);
		else
			e.pb(i);
	}
	vector<pair<int,int>> ans;
	for (int i=0; i+1<(int)o.size(); i+=2)
		ans.push_back({o[i], o[i+1]});
	for (int i=0; i+1<(int)e.size(); i+=2)
		ans.push_back({e[i], e[i+1]});
	for (int i=0; i<n-1; i++)
		cout << ans[i].first << " " << ans[i].second << endl;
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
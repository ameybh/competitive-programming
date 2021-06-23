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
const int MAXN = 2e5 + 10;

double esp = 0.0000001;
int n,m;
vector<vector<int>> adj;
vector<bool> vst;
vector<int> a,b;
int ans = 0;
void dfs(int at, double mxR, vector<int>& ns) {
	if (vst[at]) {
		return;
	}
	vst[at] = true;
	if (fabs((double)a[at]/b[at] - mxR) > esp) {
		return;
	}
	// ans++;
	ns.pb(at);
	for (auto& nb : adj[at]) {
		dfs(nb, mxR, ns);
	}
	
}

void solution() {
	cin >> n >> m;
	adj.assign(n+1, vector<int>());
	vst.assign(n+1, false);
	
	a.assign(n+1,0);
	b.assign(n+1,0);
	rep(i,1,n+1) {
		cin >> a[i];
	}
	rep(i,1,n+1) {
		cin >> b[i];
	}
	int u,v;
	rep(i,0,m) {
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	
	double mxR = 0;
	rep(i,1,n+1) {
		mxR = max(mxR, (double)a[i]/b[i]);
	}
	vector<int> mxNodes;
	rep(i,1,n+1) {
		if (fabs((double)a[i]/b[i] - mxR) <= esp) {
			mxNodes.pb(i);
		}
 	}
 	
	// int mxAns = 0;
	vector<int> ansNodes;
	for (auto& e:mxNodes) {
		// explore e
		vector<int> ns;
		// ans = 0;
		dfs(e, mxR, ns);
		// cout << ans << "\n";
		if ((int) ns.size() > (int) ansNodes.size()) {
			ansNodes = ns;
		}
	}
	set<int> ansSet;
	for (auto& e: ansNodes) {
		ansSet.insert(e);
	}
	
	cout << (int) ansSet.size() << "\n";
	for (auto& e:ansSet) {
		cout << e << " ";
	}
	
	// cout << (int) ansNodes.size() << "\n";
	// for (auto& e:ansNodes) {
		// cout << e << " ";
	// }
	
	
	
	
	
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

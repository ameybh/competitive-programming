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
#define PI 3.141592653589793

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n,k,s;
	cin >> n >> k >> s;
	vector<int> a(n,0);
	rep(i,0,n)
		cin >> a[i];
	sort(all(a));
	int req = s*k, it = n, ans = 0;
	while (req > 0 && --it >= 0) {
		req -= a[it];
		ans ++;
	}
	cout << ans << "\n";
	
	return 0;
}









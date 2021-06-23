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
int n,x;
vector<int> a;
void solution() {
	cin >> n >> x;
	a.assign(n, 0);
	for (auto& e:a)
		cin >> e;
	sort(all(a),greater<int>());
	ll ans = 0, len = 0;
	rep(i,0,n) {
		if (a[i] >= x) {
			ans++;
		}
		else {
			len++;
			if (a[i]*len >= x) {
				ans++;
				len = 0;
			}
		}
	}
	
	cout << ans << "\n";
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
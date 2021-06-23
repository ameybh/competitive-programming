// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/BTCH2020

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
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

#define MAXN 1501
int n,x,a[MAXN];
int p,d;
void solution() {
	//cout << "HelloWorld!\n";
	cin >> n >> x;
	vll data(n);
	rep(i,0,n) {
		cin >> a[i];
		data[i].ff = a[i];
		data[i].ss = 0;
	}
	
	sort(a,a+n);
	sort(all(data));
	//int mx = a[n-1];
	
	d = 1;
	int cnt = 0;
	int eat = 0;
	rep(i,0,n) {
		if (eat >= x) {
			eat = 0;
			d++;
		}
		if (!data[i].ss && data[i].ff > d) {
			cnt ++;
			eat ++;
		}
	}
	//cout << cnt;
	if (cnt == n) cout << "Possible\n";
	else cout << "Impossible\n";
	
	//p = 0;
	//d = 1;
	//1,2,4
	//2,2,3,4,4
	//int tmp = 0;
	//while(n>0 && p<n && d < mx) {
		//if (a[p]  > d) {
			//n--;
			//tmp ++;
		//}
		//if (tmp == x) {
			//d ++;
		//}
		//p++;
	//}
	//if (n<=0) cout << "Possible\n";
	//else cout << "Impossible\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

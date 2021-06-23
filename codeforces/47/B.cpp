// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF

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
#define MOD 1000000007

//make sure to change MAXN according to constraints
#define MAXN 100005


ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}

//ll t,n,k,a[MAXN],b[MAXN];
//void solution() {
string n;
ll sm = 0, cnt = 0;
	//cin >> n;
//}

char l='A', m='B',t='C';
char l1='A', m1='B',t1='C';
char l2='A', m2='B',t2='C';

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	
	
	vector<int> data =  {0,0,0};
	vector<int> data2 =  {0,0,0};
	
	if (s1[1] == '>') {
		data[s1[0] - 'A']++;
		//data[s1[2] - 'A']--;
	}
	else {
		//data[s1[0] - 'A']--;
		data[s1[2] - 'A']++;
	}
	
	if (s2[1] == '>') {
		data[s2[0] - 'A']++;
		//data[s2[2] - 'A']--;
	}
	else {
		//data[s2[0] - 'A']--;
		data[s2[2] - 'A']++;
	}
	if (s3[1] == '>') {
		data[s3[0] - 'A']++;
		//data[s3[2] - 'A']--;
	}
	else {
		//data[s3[0] - 'A']--;
		data[s3[2] - 'A']++;
	}
	
	for (int i=0; i<3; i++)
		data2[i] = data[i];
	sort(all(data2));
	rep(i,0,2) {
		if (data2[i] == data2[i+1]) {
			cout << "Impossible\n";
			return 0;
		}
	}
	string ans = "";
	ans += (char)(find(all(data),0) - data.begin()+65);
	ans += (char)(find(all(data),1) - data.begin()+65);
	ans += (char)(find(all(data),2) - data.begin()+65);
	cout << ans << "\n";
	
	return 0;
}
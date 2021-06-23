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
	cin >> s;
	int n = s.size();
	// int ans = 0;
	int l = s[n-1] - '0';
	
	if (n == count_if (all(s), [](char x){return (x-'0')&1;})) {
		cout << -1 << "\n";
		return 0;
	}
	
	for (int i=0; i<n; i++) {
		int x = s[i]-'0';
		if (x%2 == 0 && x < l) {
			swap(s[i],s[n-1]);
			cout << s << "\n";
			return 0;
		}
	}
	
	for (int i=n-1; i>=0; i--) {
		int x = s[i] - '0';
		if (x%2 == 0 && x > l) {
			swap(s[i],s[n-1]);
			cout << s << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	
	return 0;
}
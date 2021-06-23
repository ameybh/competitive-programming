// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform:Practice 1  Vjudge

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
#define present(c,x) (c.find(x) != (c).end())
#define MOD 1000000007
string s;
void solution() {
	cin >> s;
	map< char,int > mp1;
	for (auto& e:s) {
		mp1[e]++;
	}
	
	// all 4 are present
	if (present(mp1, 'R') && present(mp1, 'D') && present(mp1, 'L') && present(mp1, 'U')) {
		int p = min(mp1['R'], mp1['L']);
		int q = min(mp1['D'], mp1['U']);
		mp1['R'] = mp1['L'] = p;
		mp1['U'] = mp1['D'] = q;
		
		string ans = string(p, 'R') + string(q, 'U') + string(p, 'L') + string(q, 'D');
		cout << 2*p + 2*q << '\n';
		cout << ans << '\n';
		return;
	} else if (present(mp1, 'R') && present(mp1, 'L')) {
		// only L R are present
		cout << "2\nRL\n";
		return;
	} else if (present(mp1, 'D') && present(mp1, 'U')) {
		// only U D are present
		cout << "2\nUD\n";
		return;
	}
	
	cout << 0 << '\n';
	cout << '\n';
	
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
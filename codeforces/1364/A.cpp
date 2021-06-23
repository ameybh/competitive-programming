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


int n,x;
vector<int> a;
void solution() {
	cin >> n >> x;
	a.assign(n, 0);
	for (auto& e : a)
		cin >> e;
	int ans = n;
	int s = accumulate(all(a),0);
	while (s%x == 0 && (int) a.size() > 0) {
		if (s%x != 0 ) {
			cout << (int) a.size() << endl;
			return;
		}
		else {
			if ((int) a.size() > 1) {
				if (s-a[0] % x != 0) {
					a.erase(a.begin());
				}
				else if (s-a[(int)a.size()-1] % x != 0) {
					a.pop_back();
				}
				else {
					if (a[0] < a[(int) a.size()-1]) {
						a.erase(a.begin());
					}
					else {
						a.pop_back();
					}
				}
				ans--;
			}
			else if ((int) a.size() == 1) {
				if (a[0] % x != 0) {
					cout << 1 << endl;
					return;
				}
			}
			else {
				cout << -1 << endl;
				return;
			}
		}
		s = accumulate(all(a),0);
	}
	if (ans == 0)
		cout << -1 << endl;
	else
		cout << ans << endl;
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
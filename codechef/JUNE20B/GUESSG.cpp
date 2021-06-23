// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/JUNE20B

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
char x;

int main() {
	cin >> n;
	int q = 200;
	//~false means lie in odd q
	//~and vice-versa
	//~bool evenlie;
	//~int qodd = false;
	int i;
	for (i=0; i<q; i++) {
		cout << 1 << endl;
		cin >> x;
		if (x == 'E') {
			exit(0);
		}
		if (x == 'L') {
			break;
		}
	}
	
	int l = 1;
	int r = n;
	int mid;
	
	
	bool lie = false;
	
	while (l <= r) {
		mid = (r-l)/2 + l;	
		cout << mid << endl;
		cin >> x;
		if (x == 'E') {
			exit(0);
		}
		if (!lie) {
			
			if (x == 'G') {
				l = mid + 1;
			}
			else if (x == 'L') {
				r = mid - 1;
			}
			else {
				exit(0);
			}
		}
		if (lie) {
			lie = false;
		}
		else {
			lie = true;
		}
	}
	
	
	
	
	
	
	return 0;
}

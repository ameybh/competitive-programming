// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
const int INF = 2e9;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n;
	cin >> n;
	vector< int > x(n+5), h(n+5);
	rep(i,1,n+1) {
		cin >> x[i] >> h[i];
	}
	x[0] = INT_MIN;
	x[n+1] = INT_MAX;
	vector< int > stay(n+1), left(n+1), right(n+1);
	rep(i,1,n+1) {
		stay[i] = max({stay[i-1], left[i-1]});
		if (x[i-1]+h[i-1] < x[i]) stay[i] = max(stay[i], right[i-1]);
		
		if (x[i]-h[i] > x[i-1]) {
			left[i] = max(stay[i-1]+1, left[i-1]+1);
			if (x[i-1] + h[i-1] < x[i] - h[i]) {
				left[i] = max(left[i], right[i-1]+1);
			}
		}
		if (x[i]+h[i] < x[i+1]) {
			right[i] = max({stay[i-1], left[i-1], right[i-1]}) + 1;
		}
	}
	cout << max({stay[n], left[n], right[n]});
	return 0;
}
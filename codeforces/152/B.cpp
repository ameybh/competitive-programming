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
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	ll n, m, xc, yc, k;
	cin >> n >> m >> xc >> yc >> k;
	ll steps = 0;
	rep(i,0,k) {
		ll dx, dy;
		cin >> dx >> dy;
		ll curr_steps=LLONG_MAX;
		// cout << dx << ' ' << dy << ' ' << xc << ' ' << yc << '\n';
		if (dx > 0) curr_steps = (n-xc)/dx;
		if (dx < 0) curr_steps = (xc-1)/-dx;
		if (dy > 0) curr_steps = min(curr_steps, (m-yc)/dy);
		if (dy < 0) curr_steps = min(curr_steps, (yc-1)/-dy);
		steps += curr_steps;
		xc += curr_steps * dx;
		yc += curr_steps * dy;
	}
	cout << steps;
	
	return 0;
}
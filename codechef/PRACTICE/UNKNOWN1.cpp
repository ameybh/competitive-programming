// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#pragma GCC optimize ("trapv")
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
	float a, b;
	cin >> a >> b;
	cout << fixed << setprecision(1);
	cout << a+b << '\n' << a-b << '\n' << a*b << '\n' << a/b;
	return 0;
}

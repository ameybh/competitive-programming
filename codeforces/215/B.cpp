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
	int n, m, k;
	cin >> n;
	vector< double > r1(n);
	for (auto& e:r1) cin >> e;
	cin >> m;
	vector< double > p1(m);
	for (auto& e:p1) cin >> e;
	cin >> k;
	vector< double > p2(k);
	for (auto& e:p2) cin >> e;
	double a, b;
	cin >> a >> b;
	auto get_r2 = [&](double r_1, double p_1, double p_2) -> long double {
		return (r_1*r_1)/((a*p_2)/(b*p_1)+1);
	};
	long double r = get_r2(*max_element(all(r1)), *max_element(all(p1)), *min_element(all(p2)));
	
	cout << fixed << setprecision(12) << sqrtl(r) << '\n';
	return 0;
}
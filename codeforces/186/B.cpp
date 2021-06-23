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
	
	double n, t1, t2, k;
	cin >> n >> t1 >> t2 >> k;
	vector< pair< double, int > > scores(n);
	rep(i,0,n) {
		double a, b;
		cin >> a >> b;
		double maxScore = max((a*t1*(100-k))/100 + b*t2, (b*t1*(100-k))/100 + a*t2);
		scores[i].first = -1*maxScore;
		scores[i].second = i+1;
	}
	sort(all(scores));
	rep(i,0,n) {
		printf("%d %.2f\n", scores[i].second, -1*scores[i].first);
	}
	return 0;
}
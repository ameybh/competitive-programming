// ZCO15002.cpp

 #include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back


void solve() {
	// solution here
	ll n,k;
	cin >> n >> k;
	vector<ll> seq;
	rep(i,0,n) {
		ll x;
		cin >> x;
		seq.pb(x);
	}

	//sort(seq.begin(),seq.end());
	//ll diff = 0;
	//rep(i,0,n-1) {
		//diff = max(diff, sqrt(pow(seq[i]-seq[i+1],2)));
	//}
	//cout << diff << "\n";
	
	ll pairs_i = 0;
	rep(i,1,n) {	
		rep(j,0,i) {	
			if(sqrt(pow(seq[j]-seq[i],2))>=k) {
				pairs_i++;
			}
		}
	}
	cout << pairs_i;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}

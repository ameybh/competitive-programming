// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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

ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}

// bool comp (pair<int,int> a, pair<int,int> b) {
	// if (a.first < b.second) {
		
	// }
	
// }

int n,k;
vector<int> a;
void solution() {
	cin >> n >> k;
	a.assign(n, 0);
	for (auto& e:a)
		cin >> e;
	
	vector<pair<ull,ull>> pos (64,pair<int,int>(0,0));
	rep(i,0,n) {
		// valAnd &= a[i];
		// valOr |= a[i];
		int tmp = a[i];
		int iter = 0;
		while (tmp > 0) {
			if (tmp&1)
				pos[iter].first++;
			tmp>>=1;
			iter++;
		}		
	}
	rep(i,0,64) {
		pos[i].second = i;
		pos[i].first = (ull)((ull)1LL<<((ull)pos[i].second))*((ull)pos[i].first);
	}
	sort(all(pos));
	
	// for (auto& e:pos) {
		// cout << e.second << " " << e.first << "\n";
	// }
	
	vector<int> ind;
	set<int> reps;
	rep(i,0,64) {
		reps.insert(i);
	}
	
	int cnt = 0;
	while (cnt < k) {
		ull mx = pos.begin()->ff;
		ull mxP = pos.begin()->ss;
		ull mxInd = 0;
		rep(i,0,(int)pos.size()) {
			if (pos[i].ff > mx) {
				mx = pos[i].ff;
				mxP = pos[i].ss;
				mxInd = i;
			}
		}
		pos.erase(pos.begin()+mxInd);
		ind.pb(mxP);
		++cnt;
	}
	
	// for (auto& e:ind) {
		// cout << e << " ";
	// }
	// cout << "\n";
	// for (auto& e:reps) {
		// int indx = 0;
		// rep(i,0,(int)pos.size()) {
			
		// }
	// }
	
	// rep(i,0,64) {
		// ull mx = 0;
		// ull mxP = 0;
		// ull mxInd = 0;
		// rep(j,0,(int)pos.size()) {
			// if (pos[j].ff > mx) {
				// mx = pos[j].ff;
				// mxP = pos[j].ss;
				// mxInd = j;
			// }
		// }
		// pos.erase(pos.begin()+mxInd);
		// ind.pb(mxP);
	// }
	// for (auto& e:ind) {
		// cout << e << " ";
	// }
	// cout << "\n";
	
	
	// while (rep.size() > 0) {
		// int i = 0;
		// while (rep.count(pos[i].ss) != 1) {
			// i++;
		// }
		// if (pos[i].first != 0) {
			// int len = 1;
			// while (i+len < (int) pos.size() && pos[i+len].ss == pos[i].ss) {
				// len++;
			// }
			// len--;
			// ind.pb(pos[i+len].ss);
			// rep.erase(pos[i+len].ss);
			
		// }
		// else {
			// ind.pb(*rep.begin());
			// rep.erase(rep.begin());
		// }
	// }
	
	
	
	
	
	// for (auto& e:ind)
		// cout << e << " ";
	// cout << "\n";
	
	bitset<64> ans(0);
	// int cnt = 0;
	rep(i,0,k) {
		ans[ind[i]] = 1;
	}
	// cout << ans << "\n";
	ull ansVal = (ull) ans.to_ullong();
	cout << ansVal << "\n";
	
	return;

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

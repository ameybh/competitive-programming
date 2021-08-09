#include "bits/stdc++.h"
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define get_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }

vector < ll > pw;

void solve() {
  ll n, x;
  cin >> n >> x;
  debug(n);
  debug(x);
  if ((n&1) && x == 0) {
    cout << -1 << '\n';
    return;
  }
  
  
  
  auto getLargestPower = [&](ll n) {
    ll p = -1;
    rep(i,0,sz(pw)) {
      if (pw[i] <= n) {
        p = pw[i];
        break;
      }
    }
    return p;
  };
  

  
  vector< ll > nms;
  ll m = n;
  ll pp = getLargestPower(m);
  int k = 0;
  while (m > x) {
    while (m >= pp) {
      
      if (m <= x) {
        nms.pb(m);
        m = 0;
        k = 1;
        break;
      }
      m -= pp;
      nms.pb(pp);
    }
    pp = getLargestPower(m);
  }
  if (m > 0) {
    nms.pb(m);
  }
  debug(nms);
  debug(m);
  cout << sz(nms) << '\n';
  //cout << '\n';
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
  
  rep(i,0,30) {
    if (i&1)
      pw.pb(1<<i);
  }
  reverse(all(pw));
  
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

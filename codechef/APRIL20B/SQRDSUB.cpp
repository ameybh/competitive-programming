// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
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

#define MAX 100002 
// Function to count sub-arrays whose product 
// is divisible by k 
unordered_map<int, int> k_cnt;
ll countSubarrays(int* arr, int n, int k) {
	//unordered_map<int, int> k_cnt, current_map, cnts[MAX]; 
	unordered_map<int, int> current_map, cnts[MAX]; 
	k_cnt[2] = 2;
	// Two pointers initialized 
	int l = 0, r = 0; 

	ll ans = 0; 

	while (r < n) { 
 
		for (auto& it : k_cnt) { 
			int p = it.first; 

			while (arr[r] % p == 0) { 
				current_map[p]++; 
				cnts[r][p]++; 
				arr[r] /= p; 
			} 
		} 

		// Check if current sub-array's product is divisible by k 
		int flag = 0; 
		for (auto& it : k_cnt) { 
			int p = it.first; 
			if (current_map[p] < k_cnt[p]) { 
				flag = 1; 
				break; 
			} 
		} 
		if (!flag) { 

		
			ans += n - r; 

			
			for (auto& it : k_cnt) { 
				int p = it.first; 
				current_map[p] -= cnts[l][p]; 
			} 

			l++; 
		} 
		else { 
			r++; 
		} 
	} 

	return ans; 
} 


ll csa(ll n) {
	// return no. of subarrays with len>0
	if (n%2 == 0) {
		return (n/2)*(n+1);
	}
	else {
		return n*((n+1)/2);
	}
}

void solution() {
	//cout << "HelloWorld!\n";
	
	int n;
	cin >> n;
	int a[n];
	
	//int cnt = 0;
	
	//vll even_pos;
	rep(i,0,n) {
		cin >> a[i];
		//if (a[i] % 4 == 0) cnt ++;
		//if (a[i] % 2 == 0) even_pos.pb(i);
	}
	
	ll count = 0;
	
	
	bool foundEven = false;	
	ll oddC = 0;
	rep(i,0,n) {
		if (a[i] % 2 == 0) {
			foundEven = true;
			count += csa(oddC);
			oddC = 0;
		}
		else {
			foundEven = false;
			oddC ++;
		}
	}
	if (!foundEven) {
		count += csa(oddC);
	}
	
	
	
	rep(i,0,n) {
		if (a[i] == 0) {
			a[i] = 4;
		}
	}
	
	ll cnt4 = countSubarrays(a,n,4);
	//cout << "odd subarrays " << count << "\nsubarr div by 4" << cnt4 << "\n";
	ll answer = count + cnt4;
	cout << answer << "\n";
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

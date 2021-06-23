#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,q;
vector< int > a;
void sol() {
	cin >> n >> q;
	a.resize(n+1);
	a[0]=0;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
		
	for (int i=0; i<q; i++) {
		int l,r;
		cin >> l >> r;
		int cnt = 0;
		cnt += a[l] < a[l+1];
		cnt += a[r-1] < a[r];
		cout << ((cnt == 1) ? "YES" : "NO") << '\n';
	}	
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    sol();
}

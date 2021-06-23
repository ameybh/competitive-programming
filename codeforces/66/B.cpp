#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAXN 1001
int t,n,k,a[MAXN],mx = 1,len, j;
int s = 0;

int main() {
	// your code goes here
	
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	
	

	for (int i=0; i<n; i++) {
		j = i;
		int lcnt = 0, rcnt = 0;
		
		while (j-1 >=0) {
			if (a[j-1] <= a[j])
				lcnt ++;
			else
				break;
			j--;
		}
		
		
		j = i;
		while (j+1 < n) {
			if (a[j+1] <= a[j])
				rcnt ++;
			else
				break;
			j++;
		}
		
		mx = max(mx, lcnt + rcnt + 1);
		
	}
	
	cout << mx << "\n";
	
	
	
	
	return 0;
}
// #include "/home/amey/stdc++.h"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,h;
	cin >> n >> h;
	vector<int> stacks;
	rep(i,0,n) {
		ll x;
		cin >> x;
		stacks.pb(x);
	}
	int pointer = 0;
	bool holding = false;
	ll order;
	cin >> order;
	while(order!=0) {
		if(order==1 && pointer!=0) {
			pointer--;
		}
		else if(order==2 && pointer!=n-1) {
			pointer++;
		}
		else if(order==3 && !holding && stacks[pointer]!=0) {
			stacks[pointer]--;
			holding = true;
		}
		else if(order==4 && holding && stacks[pointer]!=h) {
			stacks[pointer]++;
			holding = false;
		}
		// take inp again at exit
		cin >> order;
	}
	rep(j,0,n) {
		cout << stacks[j] << " ";
	}
	cout << "\n";
}
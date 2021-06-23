#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1e7+10;
int t,n,q;
string s;
vector<int> queries(MAXN);
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> t;
	while (t--) {
		cin >> s >> q;
		for (int i=0; i<q; i++)
			cin >> queries[i];
		n = s.size();
		stack<int> st;
		vector<int> nxt (n, -2);
		int i=0;
		for (i=0; i<n; i++) {
			if (s[i] == '(')
				st.push(i);
			else if (st.size() > 0)
			nxt[st.top()] = i, st.pop();
		}
		for (i=n-2; i>=0; i--) {
			if (s[i] == ')') {
				nxt[i] = nxt[i+1];
			}
		}
		for (i=0; i<q;i++) {
			cout << nxt[queries[i]-1]+1 << "\n";
		}
	}
	
	
	return 0;
}

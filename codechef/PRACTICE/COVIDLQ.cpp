#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll int>
#define vs vector<string>
#define v vector<int>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		bool yes = 1;
		int n,i,m;
		cin>>n;
		v A(n);
		v B;
		for(auto &x:A)
		cin>>x;
		for(i=0;i<n;i++){
			if(A[i]==1){
				B.push_back(i);
			}
		}
		m=B.size();
		for(i=1;i<m;i++){
			if((B[i]-B[i-1])>=6){
				yes=true;
			} else {
				yes=false;
				break;
			}
		}
		if(yes){
			cout<<"YES" << '\n';
		}
		else {
				cout<<"NO" << '\n';
				}
		}
}

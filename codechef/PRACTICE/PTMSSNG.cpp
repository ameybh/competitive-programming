#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m,n,i,u,w;
        cin>>m;
        n=4*m-1;
        vector<ll int> A, B;
        map <int,int> map1, map2;
        for(i=0;i<n;i++){
            int a,b;
            cin>>a >>b;
            A.push_back(a);
            map1[a]++;
            B.push_back(b);
            map2[b]++;
        }
        //for(auto x: map1)cout<<x.first <<" " <<x.second <<endl;
        
        //cout<<endl;
        
        
        //for(auto x: map2)cout<<x.first <<" " <<x.second <<endl;
        
        for(auto x:map1)
        if(x.second%2==1){u=x.first;break;}
        for(auto x:map2)
        if(x.second%2==1){w=x.first;break;}
        
        cout<<u <<" " <<w << '\n';
    }
    
}

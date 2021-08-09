#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v. begin(),v. end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define ld  long double
#define endl '\n'
const ll mod=1e9+7;
void solve()
{
  ll  n, a,b=0,m=1, c,k=0, i=0, j=0, l=1e9+5;
  string s, q;
  cin>>s;
  n=s.size();
  rep(i, 0,s.size())
  {
    if(i+1<n && s[i]=='M')
    {
      if(s[i+1]=='U')
      {
        cout<<"Yes";return ;
      }
      i++;
      while(i<n && s[i]=='?' ) i++;
      if(s[i]=='U')
      {
        cout<<"Yes"<<endl;return ;
      }
    }
  }
  cout<<"No"<<endl ;
} 
int main()
{
 ios_base::sync_with_stdio(false);
  cin. tie(0);cout. tie(0);
    ll t=1;
 cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}

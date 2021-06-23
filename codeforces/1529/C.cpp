#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<string.h>
using namespace std;
#define pb push_back
#define all(v) v. begin(),v. end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define endl '\n'
const ll N=100001;
ll dp[2][N];
ll v[2][N];
vector<pair<ll, ll>>range(N);
vector<ll>graph[N] ;
void dfs(ll child, ll parent)
{
  if(graph[child].size()==1 && parent!=-1)
  {
  dp[0][child]=dp[1][child]=0;return ;}
  for(auto x:graph[child])
  {
    if(x!=parent){dfs(x,child);
dp[0][child]+=max(dp[1][x]+
  abs(range[child].ff-range[x].ss),dp[0][x]+
  abs(range[x].ff-range[child].ff));
      
dp[1][child]+=max(dp[1][x]+
  abs(range[child].ss-range[x].ss),dp[0][x]+
  abs(range[x].ff-range[child].ss)); }     
  }
}
void solve()
{
  ll n, a,m=INT_MAX,b=0, c=0,k=0, i, j, l=1e9+7;
  string s, r, y;
  ll hit=0;
  cin>>n;
 // v.clear();
 /* rep(i, 1,n+1)
  {
    adj[i].clear();
    dp[i][0]=0;dp[i][1]=0;
    v[i][0]=v[i][1]=0;
  }*/
  rep(i, 1,n+1) 
  {
    cin>>range[i].ff>>range[i].ss;
  }
  //fill(adj+1,adj+n+1,vector<ll>());
  rep(i,1,n)
  {
    cin>>a>>m;
    graph[a].pb(m);
    graph[m].pb(a);
  }
  rep(i, 1,n+1) dp[1][i]=dp[0][i]=0;
  dfs(1, -1);
  cout<<max(dp[0][1],dp[1][1]);
  cout<<endl;
  rep(i, 1,n+1) graph[i].clear();
}


int main()
{
  ll i, j, b=0, c=1,yog=0,hit=1;
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
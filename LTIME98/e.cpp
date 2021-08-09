#include<bits/stdc++.h>
using namespace std;
#define ff    			 first
#define ss              second
#define ll             long long
#define pb              push_back
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod 			1000000007
#define ull				unsigned long long
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);
int main ()
{
	fastio;
	int t ;
	cin >> t ;
	while(t--)
	{
		ll n ;
		cin >> n ;
		ll arr[n];
		map<int,ll>mp;
		for (int i=0;i<n;i++)
		{
			cin >> arr[i];
			mp[arr[i]]++;
		}
		ll ans=(2*((n*(n-1))/2));
		map<int,ll>::iterator it;
		for (it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>1)
			{
				ans=ans-(it->second*(it->second-1));
			}
		}
		cout<<ans<<"\n";
	}
}

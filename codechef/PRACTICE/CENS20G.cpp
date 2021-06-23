#include<iostream>
#include<cstring>
#define ll int
using namespace std;


void solve()
{
	string s;
	cin>>s;
	ll n = s.size();
	ll l=0,r=0,u=0,d=0; // count of left right up down
	
	ll x,y;
	cin>>x>>y;
	ll q;
	cin>>q;
	for(ll i=0;i<n;i++)
	{
	if(s[i]=='L')
	{
	l++;	
	}	
	else if(s[i]=='R')
	{
	r++;	
	}
	else if(s[i]=='U')
	{
	u++;	
	}
	else if(s[i]=='D')
	{
	d++;	
	}
	}
	
	ll xl, xr,yl,yr;
	xl = x-l;
	xr = x+r;
	yl = y-d;
	yr = y+u;
	
	while(q--)
	{
	bool chk = true;
	ll ans=0;	
	ll dx,dy;
	cin>>dx>>dy;	
	
	ans = abs(x-dx)+abs(y-dy) ;
	
	if(dx>xr || dx<xl || dy>yr || dy<yl)
	{
	chk = false;	
	}

	
	
	if(chk)
	cout<<"YES"<<" "<<ans<<'\n';
	else
	cout<<"NO"<<'\n';
		
	}
	
	
	//cout<<"Case #"<<CaseN<<": ";
		//CaseN++;
		// print your ans below;
	
return ;

}


int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	cin>>t;
	while(t--)
	{
	solve();
	}
	return 0;
}

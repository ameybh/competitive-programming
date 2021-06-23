#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define For(i,n) for(int i=0;i<n;i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define int long long int
#define ld long double
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define vpi vector<pair<int,int> >
#define vv vector<int>
#define MAXN 1001
int A[MAXN];


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fio;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		map<int, int> mp;
		int co = 0;
		For(i, n)
		{
			cin >> arr[i];
			if (mp[arr[i]] == 0)co++;

			mp[arr[i]]++;
		}

		//cout << co << endl;

		int vis[n] = {0};
		int i = 0, j = 1;
		vector<int> v;
		int ct = n, ck = 0;

		while (co > 1)
		{
			//cout << arr[i] << " " << arr[j] << endl;

			if (vis[i] == 0)
			{
				if (vis[j] == 0)
				{
					if (arr[i] != arr[j] && mp[arr[i] + arr[j]] == 0)
					{
						mp[arr[i]]--;
						if (mp[arr[i]] == 0)co--;
						mp[arr[j]]--;
						if (mp[arr[j]] == 0)co--;
						arr[j] = (arr[i] + arr[j]);
						mp[arr[j]]++;

						arr[i] = 0;
						vis[i] = 1;
						co++;
						i++;
						j++;


						ct--;

					}
					else {
						v.pb(i);
						i++;
						j++;
					}
				}
				else {
					j++;
				}
			}
			else {
				i++;
			}
			if (j >= n || i >= n)
			{
				i = 0;
				j = 1;
				//break;
			}

		}
		cout << ct << endl;
	}


}
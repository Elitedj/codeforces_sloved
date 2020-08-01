/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年08月01日
* Last Modified : 2020年08月01日 星期六 15时17分43秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e5+5;


int n, x;
int a[maxn];
int sum[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) sum[i] = sum[i-1]+a[i];
		if(sum[n]%x != 0) cout<<n<<"\n";
		else
		{
			int ans = -1;
			for(int i=1;i<=n;i++)
			{
				if((sum[n]-sum[i])%x != 0)
				{
					ans = max(ans, n-i); break;
				}
			}
			for(int i=n;i>=1;i--)
			{
				if(sum[i]%x != 0)
				{
					ans = max(ans, i); break;
				}
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
}

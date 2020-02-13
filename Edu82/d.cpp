#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int cnt[70];
ll n;
int m;
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(cnt, 0, sizeof(cnt));
		ll sum = 0;
		for(int i=1;i<=m;i++)
		{
			int a;
			cin>>a;
			sum+=a;
			int j=-1;
			while(a)
			{
				j++;
				a>>=1;
			}
			cnt[j]++;
		}
		if(sum<n)
		{
			cout<<"-1\n";
			continue;
		}
		int ans = 0;
		for(int i=0;i<60;i++)
		{
			if((n>>i)&1)
			{
				int j=i;
				while(cnt[j]==0)
					j++;
				cnt[j]--;
				while(j>i)
				{
					ans++;
					j--;
					cnt[j]++;
				}
			}
			cnt[i+1] += cnt[i]/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

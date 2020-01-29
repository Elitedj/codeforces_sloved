#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
ll a[maxn];
ll sum[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, s;
		scanf("%lld%lld", &n, &s);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld", &a[i]);
			sum[i] = sum[i-1] + a[i];
		}
		ll ans = 0;
		ll cnt = 0;
		if(sum[n]<=s)
		{
			printf("0\n");continue;
		}
		for(int i=1;i<=n;i++)
		{
			if(sum[i]>s)break;
			cnt = i;
		}
		int tmp = cnt+1;
		for(int i=1;i<=tmp;i++)
		{
			ll pos = lower_bound(sum+1, sum+n+1, s+a[i]) - (sum);
			//cout<<"-->"<<pos<<endl;
			if(pos>n)pos=n;
			while(sum[pos]>s+a[i] && pos)pos--;
			if(pos>cnt)
			{
				cnt = pos;
				ans = i;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}

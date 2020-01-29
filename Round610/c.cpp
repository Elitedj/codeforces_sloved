#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<ll, ll> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
P num[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, T, a, b;
		scanf("%lld%lld%lld%lld", &n, &T, &a, &b);
		ll easysum=0, hardsum=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld", &num[i].second);
			if(num[i].second) hardsum++;
			else easysum++;
		}
		for(int i=1;i<=n;i++)
			scanf("%lld", &num[i].first);
		if(easysum*a + hardsum*b <= T)
		{
			printf("%lld\n", n);
			continue;
		}
		sort(num+1, num+n+1);
		ll sum1=0, sum2=0, ans=0;
		for(int i=1;i<=n;i++)
		{
			if(i>1)
			{
				if(num[i-1].second)sum2++;
				else sum1++;
			}
			if(num[i].first-1 >= sum1*a + sum2*b)
			{
				ll remaining_time = num[i].first - 1 - (sum1*a + sum2*b);
				ll remaining_easy = easysum - sum1;
				ll remaining_hard = hardsum - sum2;
				ll sum = sum1 + sum2;
				if(remaining_easy*a >= remaining_time)
				{
					sum += remaining_time/a;
				}
				else
				{
					sum += remaining_easy + min(remaining_hard, (remaining_time - remaining_easy*a)/b);
				}
				ans = max(ans, sum);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}

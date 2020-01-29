#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int a[maxn];
int cost[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, p, k;
		scanf("%d%d%d", &n, &p, &k);
		for(int i=1;i<=n;i++)
			scanf("%d", &a[i]);
		sort(a+1, a+n+1);
		for(int i=1;i<k;i++)
			cost[i] = cost[i-1] + a[i];
		for(int i=k;i<=n;i++)
			cost[i] = cost[i-k] + a[i];
		int ans = 0;
		for(int i=1;i<=n;i++)
			if(cost[i]<=p)
				ans = max(ans, i);
		printf("%d\n", ans);
	}
	return 0;
}

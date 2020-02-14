#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 4e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int a[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int maxx=0, minx=inf, ans=0;
		for(int i=1;i<=n;i++)
			scanf("%d", &a[i]);
		for(int i=1;i<n;i++)
		{
			if(a[i]==-1 && a[i+1]!=-1)
			{
				maxx = max(maxx, a[i+1]);
				minx = min(minx, a[i+1]);
			}
			else if(a[i]!=-1 && a[i+1]==-1)
			{
				maxx = max(maxx, a[i]);
				minx = min(minx, a[i]);
			}
			else
			{
				ans = max(ans, abs(a[i]-a[i+1]));
			}
		}
		if(maxx < minx)
		{
			printf("0 0\n");
			continue;
		}
		printf("%d %d\n", max(ans, (maxx-minx+1)/2), (maxx+minx)/2);
	}
	return 0;
}

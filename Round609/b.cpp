#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
using namespace std;
 
 
 
int a[maxn], b[maxn], c[maxn];
int n, m;
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d", &b[i]);
	int ans = inf;
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	{
		int tmp;
		if(b[1]>a[i]) tmp=b[1]-a[i];
		else tmp=b[1]+m-a[i];
		for(int j=1;j<=n;j++)
			c[j] = (a[j]+tmp)%m;
		sort(c+1, c+n+1);
		int f=1;
		for(int j=1;j<=n;j++)
			if(c[j]!=b[j])
			{
				f=0;break;
			}
		if(f)
			ans=min(ans,tmp);
	}
	printf("%d\n", ans%m);
	return 0;
}

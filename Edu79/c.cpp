#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int a[maxn], ind[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			ind[a[i]] = i;
		}
		ll ans = 0;
		int mx = -1;
		for(int i=1;i<=m;i++)
		{
			int x;
			scanf("%d", &x);
			x = ind[x];
			if(x>mx)
			{
				mx = x;
				ans += 2*(x-i)+1;
			}
			else
				ans++;
		}
		printf("%lld\n", ans);
	}
	return 0;
}

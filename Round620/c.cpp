#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 4e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
struct node
{
	int t, l, h;
};
bool cmp(node a, node b)
{
	return a.t < b.t;
}
node a[200];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		for(int i=1;i<=n;i++)
			scanf("%d%d%d", &a[i].t, &a[i].l, &a[i].h);
		sort(a+1, a+n+1, cmp);
		int l=m, h=m;
		int tt = 0;
		int flag = 1;
		for(int i=1;i<=n;i++)
		{
			node tmp = a[i];
			l -= a[i].t-tt;
			h += a[i].t-tt;
			if(l>tmp.h || h<tmp.l)
			{
				flag = 0;break;
			}
			l = max(l, tmp.l);
			h = min(h, tmp.h);
			tt = tmp.t;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

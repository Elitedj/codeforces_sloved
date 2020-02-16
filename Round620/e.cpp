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
 
 
vector<int> son[maxn]; 
int dep[maxn], n, m, rt, fa[maxn][20];
int v[maxn]={0};
 
 
void dfs(int pre, int rt)
{
    dep[rt] = dep[pre]+1;
    fa[rt][0] = pre;
    v[rt] = 1;
    for(int i=1;i<=19;i++)
        fa[rt][i] = fa[fa[rt][i-1]][i-1];
    for(int i=0;i<son[rt].size();i++)
        if(v[son[rt][i]]==0)
            dfs(rt, son[rt][i]);
}
 
int lca(int a, int b)
{
    if(dep[a] < dep[b])
        swap(a, b);
    for(int i=19;i>=0;i--)
    {
        if(dep[a]-dep[b] >= (1<<i))
        {
            a = fa[a][i];
        }
    }
    if(a==b)return a;
    for(int i=19;i>=0;i--)
    {
        if(fa[a][i] != fa[b][i])
        {
            a = fa[a][i];
            b = fa[b][i];
        }
    }
    return fa[a][0];
}
 
int main()
{
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		son[a].push_back(b);
		son[b].push_back(a);
	}
	rt = 1;
	memset(dep, inf, sizeof(dep));
	v[0] = 1;
	dep[0] = 0;
	dfs(0, rt);
	scanf("%d", &m);
	while(m--)
	{
		int x, y, a, b, k;
		scanf("%d%d%d%d%d", &x, &y, &a, &b, &k);
		//ab
		int tmp = lca(a, b);
		int cnt = dep[a]+dep[b] - 2*dep[tmp];
		if(cnt<=k && cnt%2==k%2)
		{
			printf("YES\n");
			continue;
		}
		//axyb
		tmp = lca(a, x);
		cnt = dep[a]+dep[x] -2*dep[tmp];
		cnt += 1;
		tmp = lca(y, b);
		cnt += dep[y]+dep[b] - 2*dep[tmp];
		if(cnt<=k && cnt%2==k%2)
		{
			printf("YES\n");
			continue;
		}
		//ayxb
		tmp = lca(a, y);
		cnt = dep[a]+dep[y] - 2*dep[tmp];
		cnt += 1;
		tmp = lca(x, b);
		cnt += dep[x]+dep[b] - 2*dep[tmp];
		if(cnt<=k && cnt%2==k%2)
		{
			printf("YES\n");
			continue;
		}
		printf("NO\n");
	}
	return 0;
}

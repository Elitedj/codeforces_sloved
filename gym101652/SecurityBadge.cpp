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
 
 
int n, m, k, s, t, ans;
struct Edge
{
	int v, l, r;
	Edge();
	Edge(int v, int l, int r) : v(v), l(l), r(r) {}
};
 
vector<Edge> edge[1005];
vector<int> bounds;
int vis[1005];
 
void dfs(int x, int id)
{
	vis[x] = 1;
	int len = edge[x].size();
	for(int i=0;i<len;i++)
	{
		if(vis[edge[x][i].v])continue;
		if(edge[x][i].l <= id && id <= edge[x][i].r)
			dfs(edge[x][i].v, id);
	}
}
 
int main()
{
	scanf("%d%d%d%d%d", &n, &m, &k, &s, &t);
	for(int i=1;i<=m;i++)
	{
		int x, y, l, r;
		scanf("%d%d%d%d", &x, &y, &l, &r);
		edge[x].push_back(Edge(y, l, r));
		bounds.push_back(l);
		bounds.push_back(r+1);
	}
	sort(bounds.begin(), bounds.end());
	int len = unique(bounds.begin(), bounds.end()) - bounds.begin();
	for(int i=0;i<len-1;i++)
	{
		memset(vis, 0, sizeof(vis));
		dfs(s, bounds[i]);
		if(vis[t])
			ans += bounds[i+1] - bounds[i];
	}
	printf("%d\n", ans);
	return 0;
}

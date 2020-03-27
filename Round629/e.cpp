#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
 
vector<int> fa, tin, tout, dep, v;
vector<vector<int> > e; 
int t;
void dfs(int id, int pre, int d)
{
	tin[id] = t++;
	fa[id] = pre;
	dep[id] = d;
	int n = e[id].size();
	for(int i=0;i<n;i++)
	{
		if(e[id][i] == pre)continue;
		dfs(e[id][i], id, d+1);
	}
	tout[id] = t++;
}
bool ok(int u, int v)
{
	return tin[u]<=tin[v] && tout[v]<=tout[u];
}
int main()
{
	IO;
	int n, m;
	cin>>n>>m;
	fa = tin = tout = dep = vector<int>(n);
	e.resize(n);
	for(int i=1;i<n;i++)
	{
		int x, y;
		cin>>x>>y;
		x--, y--;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	dfs(0, -1, 0);
	while(m--)
	{
		int k;
		cin>>k;
		v.clear();
		for(int i=1;i<=k;i++)
		{
			int x;
			cin>>x;
			x--;
			v.push_back(x);
		}
		int tail = v[0];
		for(int i=1;i<k;i++)
			if(dep[v[i]] > dep[tail])
				tail = v[i];
		for(int i=0;i<k;i++)
		{
			if(v[i] == tail)continue;
			if(fa[v[i]] != -1)v[i] = fa[v[i]];
		}
		int f = 1;
		for(int i=0;i<k;i++) f &= ok(v[i], tail);
		if(f)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

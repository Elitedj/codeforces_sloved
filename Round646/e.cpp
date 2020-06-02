#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
ll ans;
ll cost[maxn], b[maxn];
vector<int> e[maxn];
int dfs(int x, int fa=-1)
{
	int pos=0, neg=0;
	if(b[x]>0) pos++;
	if(b[x]<0) neg++;
	for(auto p:e[x])
	{
		if(p == fa) continue;
		cost[p] = min(cost[p], cost[x]);
		int tmp = dfs(p, x);
		if(tmp>0) pos+=tmp;
		if(tmp<0) neg-=tmp;
	}
	ans += 2*min(pos, neg)*cost[x];
	return pos-neg;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x, y;
		cin>>cost[i]>>x>>y;
		b[i] = x-y;
	}
	for(int i=1;i<n;i++)
	{
		int u, v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	if(dfs(1)) cout<<"-1\n";
	else cout<<ans<<"\n";
	return 0;
}

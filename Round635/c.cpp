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
 
 
vector<int> mp[maxn];
int n, k;
int dep[maxn], sz[maxn], ans[maxn];
 
void dfs(int v, int fa)
{
	for(auto u:mp[v])
	{
		if(u == fa) continue;
		dep[u] = dep[v]+1;
		dfs(u, v);
		sz[v] += sz[u];
	}
	ans[v] = dep[v] - sz[v];
	sz[v]++;
}
 
int main()
{
	IO;
	cin>>n>>k;
	for(int i=1;i<n;++i)
	{
		int u, v;
		cin>>u>>v;
		mp[u].push_back(v);
		mp[v].push_back(u);
	}
	dfs(1, 0);
	sort(ans+1, ans+n+1);
	ll sum = 0;
	for(int i=n;i>=n-k+1;--i) sum += ans[i];
	cout<<sum<<"\n";
	return 0;
}

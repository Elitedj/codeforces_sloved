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
const int maxn = 5e5+5;
 
 
struct node
{
	int id, topic;
};
node a[maxn];
int t[maxn];
int ans[maxn];
bool cmp(node x, node y)
{
	if(x.topic == y.topic) return x.id < y.id;
	else return x.topic < y.topic;
}
vector<int> e[maxn];
int main()
{
	IO;
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u, v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		a[i].id = i;
		cin>>a[i].topic;
	}
	sort(a+1, a+n+1, cmp);
	int f = 1;
	int cnt = 1;
	for(int i=1;i<=n;i++)
	{
		set<int> tmp;
		for(auto v:e[a[i].id])
		{
			if(t[v]==0) continue;
			tmp.insert(t[v]);
		}
		int tar = 0;
		for(auto v:tmp)
			if(tar+1 == v)
				tar++;
			else break;
		//tar--;
		//DEBUG(tar);
		if(tar+1 != a[i].topic)
		{
			//for(int i=1;i<=n;i++) cout<<ans[i]<<" "; cout<<"\n";
			f = 0; break;
		}
		t[a[i].id] = tar+1;
		ans[cnt++] = a[i].id;
	}
	if(f)
	{
		for(int i=1;i<=n;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
	else
		cout<<"-1\n";
	return 0;
}

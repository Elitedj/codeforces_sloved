#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
struct edge
{
	int l, r;
	edge(int ll=0, int rr=0)
	{
		l=ll, r=rr;
	}
}e[maxn];
int d[maxn];
int ans[maxn];
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int a, b;
		cin>>a>>b;
		e[i] = edge(a, b);
		d[a]++; d[b]++;
		ans[i] = -1;
	}
	int cnt = 0;
	for(int i=1; i<n; i++)
	{
		if(d[e[i].l]==1 || d[e[i].r]==1)
			ans[i] = cnt++;
	}
	for(int i=1;i<n;i++)
		if(ans[i]==-1)
			ans[i] = cnt++;
	for(int i=1;i<n;i++)
		cout<<ans[i]<<"\n";
	return 0;
}

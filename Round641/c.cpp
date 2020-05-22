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
const int maxn = 1e5+5;
 
 
int a[maxn];
vector<int> cnt[maxn<<1];
ll kpow(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b&1)
			res *= a;
		a *= a;
		b>>=1;
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	int maxx = 0;
	for(int i=1;i<=n;++i)
	{
		int v = a[i];
		maxx = max(maxx, v);
		for(int j=2;j*j<=v;++j)
		{
			if(v%j==0)
			{
				int count = 0;
				while(v%j==0)
				{
					count++;
					v/=j;
				}
				cnt[j].push_back(count);
			}
		}
		if(v) cnt[v].push_back(1);
	}
	ll ans = 1;
	for(int i=1;i<=maxx;++i)
	{
		int sz = cnt[i].size();
		if(sz>=n-1)
		{
			sort(cnt[i].begin(), cnt[i].end());
			if(sz == n-1)
				ans *= kpow(i, cnt[i][0]);
			else
				ans *= kpow(i, cnt[i][1]);
		}
	}
	cout<<ans<<"\n";
	return 0;
}

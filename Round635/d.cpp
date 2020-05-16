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
 
 
ll cal(ll x, ll y, ll z)
{
	return (x-y)*(x-y) + (x-z)*(x-z) + (y-z)*(y-z);
}
int n[3];
vector<int> a[3];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3;++i) cin>>n[i];
		for(int i=0;i<3;++i)
		{
			a[i].clear();
			for(int j=1;j<=n[i];++j)
			{
				int x;
				cin>>x;
				a[i].push_back(x);
			}
			sort(a[i].begin(), a[i].end());
		}
		ll ans = INF;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				for(int k=0;k<3;k++)
				{
					if(i==j || i==k || j==k) continue;
					for(auto x:a[i])
					{
						auto pos1 = lower_bound(a[j].begin(), a[j].end(), x);
						auto pos2 = upper_bound(a[k].begin(), a[k].end(), x);
						if(pos1!=a[j].end() && pos2!=a[k].begin())
						{
							ll y = *pos1;
							pos2--;
							ll z = *pos2;
							ans = min(ans, cal(x, y, z));
						}
					}
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

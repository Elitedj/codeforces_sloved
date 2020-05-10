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
 
 
int a[8005];
int b[8005];
int f[8005];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i=1;i<=n;++i)
		{
			scanf("%d", &a[i]);
			f[i] = 0;
			b[i] = a[i];
		}
		sort(a+1, a+n+1);
		for(int i=1;i<=n;++i)
		{
			int sum = 0;
			for(int j=i;j>=1;--j)
			{
				sum += b[j];
				if(i==j)continue;
				//cout<<"--->"<<j<<" "<<i<<"\n";
				int pos = lower_bound(a+1, a+n+1, sum) - a;
				for(int k=pos;k<=n;++k)
				{
					if(a[k]==sum && !f[k])
						f[k] = 1;
					else
						break;
					//cout<<"==="<<sum<<" "<<a[k]<<"\n";
				}
			}
		}
		int ans = 0;
		for(int i=1;i<=n;i++)
			if(f[i]) ++ans;
		cout<<ans<<"\n";
	}
	return 0;
}

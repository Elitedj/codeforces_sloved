#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
map<int, int> mp;
ll a[100];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		mp.clear();
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		int flag = 1;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==0)continue;	
			ll tmp = a[i];
			ll base = 1;
			int cnt = 0;
			while(base<tmp) base*=k, cnt++;
			while(cnt>=0)
			{
				if(tmp==0)break;
				if(tmp>=base)
				{
					tmp-=base;
					if(mp[cnt]==1)
					{
						flag = 0;i=n+1;break;
					}
					mp[cnt] = 1;
				}
				cnt--;
				base/=k;
			}
			if(tmp!=0)
			{
				flag = 0;break;
			}
		}
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

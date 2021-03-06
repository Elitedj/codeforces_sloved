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
 
 
int a[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		ll ans = 0;
		for(int i=1;i<=n;)
		{
			int j = i;
			int tmp = -1*inf;
			while(j<=n && 1ll*a[i]*a[j] > 0)
			{
				tmp = max(tmp, a[j]);
				j++;
			}
			i = j;
			ans += tmp;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

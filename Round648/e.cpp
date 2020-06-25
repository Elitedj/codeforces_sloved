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
 
 
ll a[1000];
int main()
{
	int n;
	cin>>n;
	ll ans = 0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		ans = max(ans, a[i]);
		for(int j=i+1;j<=n;j++)
		{
			ans = max(ans, (a[i]|a[j]));
			for(int k=j+1;k<=n;k++)
				ans = max(ans, (a[i]|a[j]|a[k]));
		}
	}
	cout<<ans<<"\n";
	return 0;
}

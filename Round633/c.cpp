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
		ll ans=-1;
		for(int i=2;i<=n;i++)
		{
			if(a[i-1]>a[i])
			{
				ll v = a[i-1]-a[i];
				ll tmp = log2(v)+1;
				ans = max(ans, tmp);
				a[i] = a[i-1];
			}
		}
		if(ans==-1) cout<<"0\n";
		else cout<<ans<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 3e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
ll a[maxn], b[maxn], c[maxn];
int n;
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;++i) cin>>a[i]>>b[i];
		ll ans = INF, sum = 0;
		for(int i=2;i<=n;++i)
		{
			ll v = a[i] - b[i-1];
			c[i] = v<=0 ? 0 : v;
			sum += c[i];
		}
		c[1] = a[1]-b[n]<=0 ? 0 : a[1]-b[n];
		sum += c[1];
		for(int i=1;i<=n;++i)
		{
			ans = min(ans, sum-c[i]+a[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

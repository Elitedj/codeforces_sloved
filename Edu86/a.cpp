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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll ans = 0;
		ll x, y, a, b;
		cin>>x>>y>>a>>b;
		if(x*y<0)
		{
			ans = a*(abs(x)+abs(y));
		}
		else
		{
			ll sum = 0;
			x = abs(x), y = abs(y);
			ans = a*(x+y);
			sum += a*abs(x-y);
			x = y = min(x, y);
			sum += b*(x);
			ans = min(ans, sum);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

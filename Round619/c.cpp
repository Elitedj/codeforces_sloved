#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 4e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		ll n, m;
		cin>>n>>m;
		ll ans = n*(n+1)/2;
		ll tmp = n/2;
		if(m>tmp)
		{
			ans -= n-m;
		}
		else
		{
			ll a = (n-m)/(m+1);
			tmp = (n-m)%(m+1);
			ll b = a+1;
			ans -= tmp*(b*(b+1)/2);
			tmp = (m+1)-tmp;
			ans -= tmp*(a*(a+1)/2);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

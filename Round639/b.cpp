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
 
 
ll cal(ll x)
{
	return (x*(3*x+1))/2;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int ans = 0;
		for(int i=30000;i;i--)
		{
			ll x = cal(1ll*i);
			while(x<=n)
			{
				ans++;
				n-=x;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

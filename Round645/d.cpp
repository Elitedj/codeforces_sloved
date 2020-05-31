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
const int maxn = 1e6+5;
 
 
ll a[maxn];
int main()
{
	int n;
	ll x;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i+n] = a[i];
	}
	ll ans = 0;
	ll sum = 0;
	ll hug = 0;
	for(int l=1, r=1; r<=(n<<1);r++)
	{
		sum += a[r];
		hug += (1+a[r])*a[r]/2;
		if(sum < x) continue;
		if(sum == x) ans = max(ans, hug);
		else
		{
			ll tmphug = hug;
			ll tmp = sum-x;
			int idx = l;
			while(tmp)
			{
				tmphug -= (1+min(tmp,a[idx]))*(min(tmp, a[idx]))/2;
				tmp -= min(tmp, a[idx]);
				idx++;
			}
			ans = max(ans, tmphug);
		}
		while(sum >= x)
		{
			hug -= (1+a[l])*a[l]/2;
			sum -= a[l];
			l++;
		}
		//cout<<l<<" "<<r<<" "<<ans<<"\n";
	}
	cout<<ans<<"\n";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	ll n;
	while(cin>>n)
	{
		ll sum = n*(n-1)/2;
		ll l=1, r=n, ans;
		while(l<=r)
		{
			ll mid = (l+r)>>1;
			if((n-mid)*(n-mid+1) <= sum)
				r = mid-1;
			else
				ans = mid, l=mid+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

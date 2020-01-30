#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
ll f[250005];
int main()
{
	int n, m;
	cin>>n>>m;
	f[0] = 1;
	for(int i=1;i<=n;i++)
		f[i] = i*f[i-1]%m;
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans += (n-i+1)*(f[i]*f[n-i+1]%m)%m;
		ans%=m;
	}
	cout<<ans<<"\n";
	return 0;
}

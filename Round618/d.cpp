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
const double eps = 1e-9;
using namespace std;
 
 
ll x[maxn], y[maxn];
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	if(n&1)
	{
		cout<<"NO\n";
		return 0;
	}
	ll xx = x[1]+x[1+n/2], yy = y[1]+y[1+n/2];
	for(int i=2;i<=n/2;i++)
	{
		if(x[i]+x[i+n/2]!=xx || y[i]+y[i+n/2]!=yy)
		{
			cout<<"NO\n";return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}

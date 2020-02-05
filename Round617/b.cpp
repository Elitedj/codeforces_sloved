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
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll ans = n;
		ll tmp = n;
		while(tmp>=10)
		{
			ans += tmp/10;
			tmp = tmp/10 + tmp%10;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

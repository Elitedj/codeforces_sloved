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
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int cnt = 0;
		int sum = 0;
		sum = k/(n-1)*(n-1);
		cnt = k/(n-1);
		if(k%(n-1)==0)
		{
			sum -= (n-1);
			--cnt;
		}
		ll ans = 1ll*cnt*n;
		k -= sum;
		ans += k;
		cout<<ans<<"\n";
	}
	return 0;
}

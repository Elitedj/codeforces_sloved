#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 3e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int a[3510];
int n, m, k;
int fun(int l, int r, int ind)
{
	int res = inf;
	int len = (r-l+1)-(ind-1);
	for(int i=l; i+len-1<=r;i++)
		res = min(res, max(a[i], a[i+len-1]));
	return res;
}
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++)cin>>a[i];
		if(k>=m-1)k=m-1;
		int ind = m-k;
		int ans = -1;
		int len = n-k;
		//cout<<"ind-->"<<ind<<endl;
		//cout<<"len-->"<<len<<endl;
		for(int i=1;i+len-1<=n;i++)
		{
			ans = max(ans, fun(i, i+len-1, ind));
		}
		cout<<ans<<"\n";
	}
	return 0;
}

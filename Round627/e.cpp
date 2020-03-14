#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
 
int dp[2005][2005];
int a[2005];
int main()
{
	int n, h, l, r;
	cin>>n>>h>>l>>r;
	memset(dp, 0xc0, sizeof(dp));
	dp[0][0] = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<h;j++)
		{
			int t = (j+a[i])%h;
			dp[i+1][t] = max(dp[i+1][t], dp[i][j]+(l<=t&&t<=r));
			t = (j+a[i]-1+h)%h;
			dp[i+1][t] = max(dp[i+1][t], dp[i][j]+(l<=t&&t<=r));
		}
	}
	int ans = 0;
	for(int i=0;i<h;i++) ans = max(ans, dp[n][i]);
	cout<<ans<<"\n";
	return 0;
}

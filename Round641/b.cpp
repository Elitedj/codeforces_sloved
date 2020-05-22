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
 
 
int s[maxn], dp[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;++i) cin>>s[i];
		for(int i=1;i<=n;++i) dp[i]=1;
		for(int i=2;i<=n;++i)
		{
			for(int j=1;j<=sqrt(i);++j)
			{
				if(i%j==0)
				{
					if(s[i] > s[j])
						dp[i] = max(dp[i], dp[j]+1);
					if(s[i] > s[i/j])
						dp[i] = max(dp[i], dp[i/j]+1);
				}
			}
		}
		int ans = 0;
		for(int i=1;i<=n;++i) ans = max(ans, dp[i]);
		cout<<ans<<"\n";
	}
	return 0;
}

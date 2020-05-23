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
const int maxn = 2e5+5;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		string s;
		cin>>n>>k>>s;
		vector<int> ones(n+1, 0);
		for(int i=0;i<n;i++)
			ones[i+1] = ones[i] + (s[i]=='1');
		int ans = ones[n];
		vector<int> dp(n, inf);
		for(int i=0;i<n;i++)
		{
			dp[i] = (s[i] != '1') + ones[i];
			if(i >= k)
				dp[i] = min(dp[i], (s[i]!='1')+dp[i-k]+(ones[i]-ones[i-k+1]));
			ans = min(ans, dp[i]+ones[n]-ones[i+1]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

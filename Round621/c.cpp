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
using namespace std;
 
 
char s[maxn];
ll dp[30][30];
ll cnt[30];
int main()
{
	scanf("%s", s);
	int n = strlen(s);
	ll ans = 0;
	for(int i=0;i<n;i++)
	{
		int tmp = s[i]-'a';
		for(int j=0;j<26;j++)
			dp[tmp][j] += cnt[j];
		cnt[tmp]++;
	}
	for(int i=0;i<26;i++)
		for(int j=0;j<26;j++)
			ans = max(ans, dp[i][j]);
	for(int i=0;i<26;i++)
		ans = max(ans, cnt[i]);
	printf("%lld\n", ans);
	return 0;
}

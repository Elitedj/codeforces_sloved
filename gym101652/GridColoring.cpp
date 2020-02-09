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
 
 
int n, m;
int can[50][50]; // 表示grid[i][j]能否不受现有颜色的影响涂B
char grid[50][50];
ll dp[50][50];	// dp[i][j]表示第i行前j个都是B的方案数
bool check(int x, int y)
{
	for(int i=1;i<=y;i++)
	{
		if(grid[x][i] == 'R')
			return 0;
	}
	for(int i=y+1;i<=m;i++)
	{
		if(grid[x][i] == 'B')
			return 0;
	}
	return 1;
}
 
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
		scanf("%s", grid[i]+1);
	for(int i=1;i<=n;i++)
		for(int j=0;j<=m;j++)
			can[i][j] = check(i, j);
	for(int i=0;i<=m;i++)
		dp[1][i] = can[1][i];
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(can[i][j]==0)continue;
			// 第i行前j个涂B，只有第i-1行，前j...m个涂B才符合条件
			for(int k=j;k<=m;k++)
				dp[i][j] += dp[i-1][k];
		}
	}
	ll ans = 0;
	for(int i=0;i<=m;i++)
		ans += dp[n][i];
	printf("%lld\n", ans);
	return 0;
}

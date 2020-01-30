#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;


//长度、剩余的偶数个数、当前位的奇偶性
//0为偶数，1位奇数
int dp[105][105][2];
int a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	memset(dp, inf, sizeof(dp));
	if(a[1]==0 || a[1]%2==1)dp[1][n/2][1]=0;//当第一个数为奇数时
	if(n/2>0 && (a[1]==0 || a[1]%2==0))dp[1][n/2-1][0]=0;//当存在偶数，且第一个数为偶数时
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=n/2;j++)
		{
			for(int k=0;k<2;k++)
			{
				if(a[i]==0 || a[i]%2==1)//当前放奇数
					dp[i][j][1] = min(dp[i][j][1], dp[i-1][j][k]+(k==0));
				if(j>0 && (a[i]==0||a[i]%2==0))
					dp[i][j-1][0] = min(dp[i][j-1][0], dp[i-1][j][k]+(k==1));
			}
		}
	}
	cout<<min(dp[n][0][0], dp[n][0][1])<<"\n";
	return 0;
}

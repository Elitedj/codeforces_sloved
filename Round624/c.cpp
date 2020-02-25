/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年02月25日
* Last Modified : 2020年02月25日 星期二 15时03分07秒
* Created By : Elitedj
************************************************************************/


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



int a[30][maxn];
char s[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		scanf("%s", s+1);
		for(int i=0;i<26;i++)
			for(int j=0;j<=n;j++)
				a[i][j] = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<26;j++)
				a[j][i] = a[j][i-1] + (s[i]-'a' == j);
		}
		int ans[30];
		memset(ans, 0, sizeof(ans));
		for(int i=1;i<=m;i++)
		{
			int x;
			scanf("%d", &x);
			for(int j=0;j<26;j++)
				ans[j] += a[j][x];
		}
		for(int i=0;i<26;i++)
			printf("%d ", ans[i]+a[i][n]);
		printf("\n");
	}
	return 0;
}

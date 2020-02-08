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
using namespace std;
 
 
char mp[40][40];
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		for(int i=1;i<=n;i++)
			scanf("%s", mp[i]+1);
		int isLS=1, isRed=1;
		for(int i=1;i<=n;i++)
		{
			set<int> s;
			for(int j=1;j<=n;j++)
				s.insert(mp[i][j]);
			if(s.size()!=n)
			{
				isLS=0;break;
			}
		}
		for(int j=1;j<=n;j++)
		{
			set<int> s;
			for(int i=1;i<=n;i++)
				s.insert(mp[i][j]);
			if(s.size()!=n)
			{
				isLS=0;break;
			}
		}
		for(int i=1;i+1<=n;i++)
			if(mp[1][i]>=mp[1][i+1])
			{
				isRed=0;break;
			}
		for(int i=1;i+1<=n;i++)
			if(mp[i][1]>=mp[i+1][1])
			{
				isRed=0;break;
			}
		if(!isLS)
			printf("No\n");
		else if(isRed)
			printf("Reduced\n");
		else
			printf("Not Reduced\n");
	}
	return 0;
}

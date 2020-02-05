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
 
 
map<P, int> mp;
char s[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		scanf("%s", s+1);
		mp.clear();
		int x=0, y=0;
		int ans=inf, l, r;
		mp[P(0, 0)] = 1;
		for(int i=1;i<=n;i++)
		{
			if(s[i]=='L')x--;
			else if(s[i]=='R')x++;
			else if(s[i]=='U')y--;
			else y++;
			int j=mp[P(x, y)];
			if(j)
			{
				if(i-j+1 < ans)
				{
					ans = i-j+1;
					l=j, r=i;
				}
			}
			mp[P(x, y)] = i+1;
		}
		if(ans==inf)
			printf("-1\n");
		else
			printf("%d %d\n", l, r);
	}
	return 0;
}

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
 
char mp[1005][1005];
int vis[1005][1005];
int dir[4][2] = {
	1, 0, -1, 0, 0, 1, 0, -1
};
int n, m;
int f1, f2;
void dfs(int x, int y)
{
	vis[x][y] = 1;
	for(int i=0;i<4;i++)
	{
		int nx=x+dir[i][0], ny=y+dir[i][1];
		if(nx<0 || nx>=n || ny<0 || ny>=m || vis[nx][ny] || mp[nx][ny]=='.') continue;
		dfs(nx, ny);
	}
}
int check1()
{
	int f = 1;
	for(int i=0;i<n;i++)
	{
		f = 1;
		for(int j=0;j<m;)
		{
			if(mp[i][j]=='#' && f)
			{
				while(j<m && mp[i][j]=='#') j++;
				f = 0;
			}
			else if(mp[i][j]=='#' && !f) return 1;
			else j++;
		}
		if(f && f2) return 1;
	}
	return 0;
}
int check2()
{
	int f = 1;
	for(int j=0;j<m;j++)
	{
		f = 1;
		for(int i=0;i<n;)
		{
			if(mp[i][j]=='#' && f)
			{
				while(i<n && mp[i][j]=='#') i++;
				f = 0;
			}
			else if(mp[i][j]=='#' && !f) return 1;
			else i++;
		}
		if(f && f1) return 1;
	}
	return 0;
}
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=0;i<n;i++) scanf("%s", mp[i]);
	for(int i=0;i<n;i++)
	{
		f1 = 0;
		for(int j=0;j<m;j++)
		{
			if(mp[i][j]=='#') f1 = 1;
		}
		if(!f1) break;
	}
	for(int j=0;j<m;j++)
	{
		f2 = 0;
		for(int i=0;i<n;i++)
		{
			if(mp[i][j]=='#') f2 = 1;
		}
		if(!f2) break;
	}
	if(check1() || check2()) cout<<"-1\n";
	else
	{
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(mp[i][j]=='#' && !vis[i][j])
				{
					ans++;
					dfs(i, j);
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

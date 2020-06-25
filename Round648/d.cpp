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
 
 
int n, m;
char mp[100][100];
int dir[4][2] = {
	1, 0, -1, 0, 0, -1, 0, 1
};
int vis[100][100];
void init()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(mp[i][j] == 'B')
			{
				for(int k=0;k<4;k++)
				{
					int nx = i+dir[k][0];
					int ny = j+dir[k][1];
					if(nx<1 || nx>n || ny<1 || ny>m || mp[nx][ny]!='.') continue;
					mp[nx][ny] = '#';
				}
			}
}
bool check()
{
	memset(vis, 0, sizeof(vis));
	queue<P> q;
	q.push(P(n, m));
	vis[n][m] = 1;
	while(!q.empty())
	{
		P now = q.front();
		q.pop();
		int x = now.first;
		int y = now.second;
		if(mp[x][y] == '#') break;
		for(int k=0;k<4;k++)
		{
			int nx = x+dir[k][0];
			int ny = y+dir[k][1];
			if(nx<1 || nx>n || ny<1 || ny>m || vis[nx][ny] || mp[nx][ny]=='#')continue;
			vis[nx][ny] = 1;
			q.push(P(nx, ny));
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(mp[i][j] == 'G' && vis[i][j] == 0) return false;
			else if(mp[i][j] == 'B' && vis[i][j] == 1) return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>mp[i][j];
		init();
		if(check()) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

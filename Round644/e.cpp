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
const int maxn = 1e6+5;
 
 
int n;
char mp[55][55];
int vis[55][55];
int dir[4][2] = {
	-1, 0, 0, -1
};
void bfs(int x, int y)
{
	vis[x][y] = 1;
	for(int i=0;i<2;i++)
	{
		int nx = x+dir[i][0], ny = y+dir[i][1];
		if(nx<1 || nx>n || ny<1 || ny>n || vis[nx][ny] || mp[nx][ny]=='0') continue;
		bfs(nx, ny);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				cin>>mp[i][j];
				vis[i][j] = 0;
			}
		for(int i=1;i<=n;i++)
		{
			if(mp[n][i] == '1') bfs(n, i);
			if(mp[i][n] == '1') bfs(i, n);
		}
		int ok = 1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(mp[i][j] == '1' && !vis[i][j])
				{
					ok = 0;
				}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

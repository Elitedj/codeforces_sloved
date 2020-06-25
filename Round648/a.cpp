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
int mp[55][55];
int c[55][55];
void init()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j] == 1)
			{
				for(int k=1;k<=n;k++)
					c[k][j] = 1;
				for(int k=1;k<=m;k++)
					c[i][k] = 1;
			}
		}
}
int move()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(c[i][j] == 0)
			{
				for(int k=1;k<=n;k++)
					c[k][j] = 1;
				for(int k=1;k<=m;k++)
					c[i][k] = 1;
				return 1;
			}
		}
	return 0;
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
			{
				cin>>mp[i][j];
				c[i][j] = mp[i][j];
			}
		init();
		int cnt = 0;
		while(move()) cnt++;
		if(cnt % 2 == 0) cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
	return 0;
 }

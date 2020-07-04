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
 
 
 
int cnt[100][2];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		memset(cnt, 0, sizeof(cnt));
		cin>>n>>m;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				int x;
				cin>>x;
				cnt[i+j][x]++;
			}
		int ans = 0;
		for(int i=0, j=n+m-2; i<j; i++,j--)
			ans += min(cnt[i][0]+cnt[j][0], cnt[i][1]+cnt[j][1]);
		cout<<ans<<"\n";
	}
	return 0;
}

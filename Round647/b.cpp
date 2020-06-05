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
 
 
int a[1500];
int b[1500];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1, a+n+1);
		int ans = -1;
		for(int i=1;i<=1024;i++)
		{
			for(int j=1;j<=n;j++)
			{
				b[j] = (a[j]^i);
			}
			sort(b+1, b+n+1);
			int f = 1;
			for(int i=1;i<=n;i++)
				if(a[i]!=b[i])
				{
					f = 0;break;
				}
			if(f)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<"\n";
	}	
	return 0;
}

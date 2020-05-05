#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
int ans[maxn];
int a[maxn];
int prime[12] = {
	 0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31
};
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			ans[i] = 0;
		}
		int cnt = 0;
		int col = 1;
		for(int i=1;i<=11;i++)
		{
			int f = 0;
			for(int j=1;j<=n;j++)
			{
				if(ans[j]) continue;
				if(a[j]%prime[i] == 0)
				{
					++cnt;
					ans[j] = col;
					f = 1;
				}
				if(cnt == n)break;
			}
			if(cnt == n)break;
			if(f) ++col;
		}
		cout<<col<<"\n";
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}

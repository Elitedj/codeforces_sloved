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
 
 
int a[200];
int f[200];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		memset(f, 0, sizeof(f));
		int cnt = 0, minn = inf, maxx = -1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(f[a[i]] == 0) cnt++;
			f[a[i]] = 1;
			minn = min(minn, a[i]);
			maxx = max(maxx, a[i]);
		}
		if(cnt > k)
		{
			cout<<"-1\n";
			continue;
		}
		cout<<n*k<<"\n";
		for(int i=1;i<=n;i++)
		{
			for(int i=minn;i<=maxx;i++)
				if(f[i])
					cout<<i<<" ";
			int tmp = k-cnt;
			while(tmp)
			{
				tmp--;
				cout<<maxx<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

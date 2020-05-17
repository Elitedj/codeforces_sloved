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
 
 
int a[maxn];
int f[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
			f[i] = 0;
		}
		for(int i=2;i<=n-1;i++)
		{
			if(a[i]>a[i-1] && a[i]>a[i+1]) f[i] = 1;
		}
		int ans = 0, be = 1;
		for(int i=1;i<k;++i)
		{
			if(f[i]) ans++;
		}
		int l = 1, r = k, maxx = ans;
		while(r<=n)
		{
			l++;
			if(f[l]) maxx--;
			if(f[r]) maxx++;
			r++;
			if(r<=n && maxx > ans)
			{
				ans = maxx;
				be = l;
			}
		}
		cout<<ans+1<<" "<<be<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
int a[maxn], b[maxn], f[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		vector<P> ans;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i] = f[i] = 0;
		}
		int l=n+1, r=0;
		for(int i=1;i<=n;i++)
		{
			if(b[a[i]]) break;
			l = min(l, a[i]);
			r = max(r, a[i]);
			if(l==1 && r==i)
				f[i] = 1;
			b[a[i]] = 1;
		}
		for(int i=1;i<=n;i++) b[i] = 0;
		l=n+1, r=0;
		for(int i=n;i;i--)
		{
			if(b[a[i]]) break;
			l = min(l, a[i]);
			r = max(r, a[i]);
			if(l==1 && r==n-i+1 && f[i-1])
				ans.push_back(P(i-1, n-i+1));
			b[a[i]] = 1;
		}
		cout<<ans.size()<<"\n";
		for(auto v:ans)
			cout<<v.first<<" "<<v.second<<"\n";
	}
	return 0;
}

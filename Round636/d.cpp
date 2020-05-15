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
 
 
int a[maxn], cnt[2*maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		for(int i=1;i<=n;++i) cin>>a[i];
		for(int i=1;i<=(k<<1);++i) cnt[i] = 0;
		for(int i=1;i<=n/2;++i)
		{
			int maxx = max(a[i], a[n-i+1]);
			int minn = min(a[i], a[n-i+1]);
			cnt[2] += 2;
			cnt[minn+1] -= 2;
			cnt[minn+1] += 1;
			cnt[minn+maxx] -= 1;
			cnt[minn+maxx+1] += 1;
			cnt[maxx+k+1] -= 1;
			cnt[maxx+k+1] += 2;
		}
		int ans = n;
		for(int i=2;i<=(k<<1);++i)
		{
			cnt[i] += cnt[i-1];
			ans = min(ans, cnt[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

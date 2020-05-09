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
 
 
int n;
ll cnt[maxn];
ll slove(ll x)
{
	if(x>cnt[n-1]) return 1;
	auto pos = lower_bound(cnt+1, cnt+n+1, x) - cnt;
	int b = x-cnt[pos-1];
	if(b&1) return pos;
	return b/2+pos;
}
int main()
{
	IO;
	int t;
	ll l, r;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>r;
		for(int i=1;i<=n;++i)
			cnt[i] = cnt[i-1]+2*(n-i);
		for(ll i=l;i<=r;++i)
			cout<<slove(i)<<" ";
		cout<<"\n";
	}
	return 0;
}

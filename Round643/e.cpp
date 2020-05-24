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
 
 
ll n, a, b, c;
ll h[maxn];
ll cost(int x)
{
	ll cnt1=0, cnt2=0;
	for(int i=1;i<=n;++i)
	{
		if(h[i]<x) cnt1 += x-h[i];
		if(h[i]>x) cnt2 += h[i]-x;
	}
	if(c<a+b)
		return c*min(cnt1, cnt2)+a*(cnt1-min(cnt1, cnt2))+b*(cnt2-min(cnt1, cnt2));
	else return cnt1*a + cnt2*b;
}
int main()
{
	cin>>n>>a>>b>>c;
	ll l=INF, r=0;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
		l = min(l, h[i]-1);
		r = max(r, h[i]+1);
	}
	while(l<r-1)
	{
		ll mid = (l+r)/2;
		ll mid2 = (mid+r)/2;
		if(cost(mid) > cost(mid2)) l=mid;
		else r=mid2;
	}
	cout<<min(cost(l), cost(r))<<"\n";
	return 0;
}

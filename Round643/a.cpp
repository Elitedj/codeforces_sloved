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
 
 
int getmin(ll a)
{
	int ans = inf;
	while(a)
	{
		ans = min(ans, (int)(a%10));
		a /= 10;
	}
	return ans;
}
int getmax(ll a)
{
	int ans = -1;
	while(a)
	{
		ans = max(ans, (int)(a%10));
		a /= 10;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a, k;
		cin>>a>>k;
		k--;
		while(k--)
		{
			ll add = getmin(a)*getmax(a);
			if(add == 0) break;
			a += add;
		}
		cout<<a<<"\n";
	}
	return 0;
}

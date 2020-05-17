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
 
 
int lcm, mx;
int gcd(int a, int b)
{
	return b==0 ? a : gcd(b, a%b);
}
ll cal(ll x)
{
	ll ans = 0;
	ans = (x+1)/lcm*(lcm-mx);
	return ans + max((x+1)%lcm-mx, (ll)0);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, q;
		cin>>a>>b>>q;
		lcm = a*b/gcd(a, b);
		mx = max(a, b);
		while(q--)
		{
			ll l, r;
			cin>>l>>r;
			cout<<cal(r) - cal(l-1)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
ll qmod(ll a, ll b)
{
	ll ans = 1;
	while(b)
	{
		if(b&1) ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans%mod;
}
 
ll c(ll a, ll b)
{
	ll ans=1, d=1;
	for(ll i=a; i>=a-b+1;i--)ans=ans*i%mod;
	for(ll i=b;i>=1;i--)d=d*i%mod;
	ans = ans*qmod(d, mod-2)%mod;
	return ans;
}
int main()
{
	ll n, m;
	cin>>n>>m;
	if(n==2)
	{
		cout<<"0\n";return 0;
	}
	cout<<c(m, n-1)*(n-2)%mod*qmod(2, n-3)%mod<<"\n";
	return 0;
}

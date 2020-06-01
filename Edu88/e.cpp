#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 5e5+5;
 
 
ll a[maxn], f[maxn], inv[maxn];
void init()
{
	inv[1] = 1;
	for(int i=2;i<=maxn-5;i++)
		inv[i] = inv[mod%i]*(mod-mod/i)%mod;
	f[0] = inv[0] = 1;
	for(int i=1;i<maxn-5;i++)
	{
		f[i] = i*f[i-1]%mod;
		inv[i] = inv[i]*inv[i-1]%mod;
	}
}
ll c(int m, int n)
{
	if(m<0 || m>n) return 0;
	return f[n]*inv[n-m]%mod*inv[m]%mod;
}
int main()
{
	int n, k;
	cin>>n>>k;
	init();
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans = (ans+c(k-1, n/i-1))%mod;
	}
	cout<<ans<<"\n";
	return 0;
}

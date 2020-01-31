#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
ll gcd(ll a, ll b)
{
	return b==0 ? a : gcd(b, a%b);
}
 
ll phi(ll n)
{
	ll res=n;
	for(ll i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			res=res/i*(i-1);
			while(n%i==0)n/=i;
		}
	}
	if(n>1)res=res/n*(n-1);
	return res;
}
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		ll a, m;
		cin>>a>>m;
		cout<<phi(m/gcd(a, m))<<"\n";
	}
	return 0;
}

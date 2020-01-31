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
int main()
{
	ll n;
	cin>>n;
	ll ans = n;
	ll len = sqrt(n);
	for(ll i=1;i<=len;i++)
	{
		if(n%i==0 && gcd(i, n/i)==1)
			ans=i;
	}
	cout<<ans<<" "<<n/ans<<"\n";
	return 0;
}

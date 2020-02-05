#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
ll n, a, b, k;
ll num[maxn];
vector<ll> v;
int main()
{
	IO;
	cin>>n>>a>>b>>k;
	for(int i=1;i<=n;i++)
		cin>>num[i];
	ll sum = a+b;
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
		num[i] %= sum;
		if(num[i]==0)num[i]+=b;
		else
			num[i] -= a;
		if(num[i]<=0)ans++;
		else
		{
			ll cnt = num[i]/a + (num[i]%a>0);
			//cout<<i<<"-->"<<cnt<<endl;
			v.push_back(cnt);
		}
	}
	sort(v.begin(), v.end());
	for(auto t:v)
	{
		if(k>=t)
		{
			k-=t;
			ans++;
		}
		else break;
	}
	cout<<ans<<endl;
	return 0;
}

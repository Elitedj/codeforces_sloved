#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
vector<ll> addnum;
void init()
{
	ll a = 2;
	while(a<=1e18)
	{
		addnum.push_back(a);
		a<<=1;
	}
}
ll a[maxn];
int main()
{
	init();
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll sum = 0, xorsum = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum += a[i];
			xorsum ^= a[i];
		}
		if(sum == 2*xorsum)
		{
			cout<<"0\n\n";
			continue;
		}
		int pos = lower_bound(addnum.begin(), addnum.end(), max(sum, xorsum*2)) - addnum.begin();
		ll v = addnum[pos];
		if(sum&1)v++;
		sum += v;
		xorsum ^= v;
		xorsum <<= 1;
		ll x = (xorsum-sum)/2;
		cout<<"3\n";
		cout<<v<<" "<<x<<" "<<x<<"\n";
	}
	return 0;
}

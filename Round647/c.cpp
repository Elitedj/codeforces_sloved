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
 
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n == 1)
		{
			cout<<"1\n";
			continue;
		}
		else if(n == 2)
		{
			cout<<"3\n";
			continue;
		}
		ll ans = 0;
		ll cnt = 1;
		ll presum = 1;
		ll sum = 1;
		ll prenumber = 1;
		ll number = 1;
		while(number + prenumber + 1 <= n)
		{
			cnt++;
			sum += cnt;
			sum += presum;
			presum = sum;
			number += prenumber+1;
			prenumber = number;
		}
		if(number + 1 <= n)
		{
			n--;
			ans += cnt+1;
		}
		n -= number;
		ans += sum;
		while(number>1)
		{
			presum = (presum-cnt)/2;
			sum -= presum;
			prenumber = (prenumber-1)/2;
			number -= prenumber;
			if(n >= number)
			{
				n -= number;
				ans += sum;
			}
			sum -= cnt;
			number--;
			if(n >= number)
			{
				n -= number;
				ans += sum;
			}
			cnt--;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

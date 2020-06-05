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
		ll a, b;
		cin>>a>>b;
		int cnt1=0, cnt2=0;
		while(1)
		{
			if(a%2==0)
			{
				a>>=1;
				cnt1++;
			}
			else break;
		}
		while(1)
		{
			if(b%2==0)
			{
				b>>=1;
				cnt2++;
			}
			else break;
		}
		if(a!=b)
		{
			cout<<"-1\n";
		}
		else
		{
			ll sum = abs(cnt2-cnt1);
			ll ans = 0;
			ans += sum/3;
			sum -= sum/3*3;
			ans += sum/2;
			sum -= sum/2*2;
			ans += sum;
			cout<<ans<<"\n";
		}
	}
	return 0;
}

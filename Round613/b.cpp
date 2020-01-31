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
 
 
int a[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll sum = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum += a[i];
		}
		ll ans = -INF;
		ll temp = 0;
		for(int i=1;i<n;i++)
		{
			temp += a[i];
			ans = max(ans, temp);
			if(temp<=0)temp=0;
		}
		temp = 0;
		for(int i=2;i<=n;i++)
		{
			temp += a[i];
			ans = max(ans, temp);
			if(temp<=0)temp=0;
		}
		if(ans>=sum)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}

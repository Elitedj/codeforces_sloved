#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<ll, ll> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[3];
		for(int i=0;i<3;i++)cin>>a[i];
		sort(a, a+3);
		if(a[2]>a[0]+a[1]+1)cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}

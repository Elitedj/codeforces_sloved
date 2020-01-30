#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n, k1, k2;
		cin>>n>>k1>>k2;
		int maxa=0, maxb=0;
		for(int i=1;i<=k1;i++)
		{
			int x;
			cin>>x;
			maxa = max(maxa, x);
		}
		for(int i=1;i<=k2;i++)
		{
			int x;
			cin>>x;
			maxb = max(maxb, x);
		}
		if(maxa > maxb)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

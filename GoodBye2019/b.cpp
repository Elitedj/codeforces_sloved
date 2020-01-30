#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
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
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int f=0;
		for(int i=1;i<n;i++)
		{
			if(abs(a[i]-a[i+1])>=2)
			{
				cout<<"YES\n";
				cout<<i<<" "<<i+1<<"\n";
				f=1;
				break;
			}
		}
		if(!f)cout<<"NO\n";
	}
	return 0;
}

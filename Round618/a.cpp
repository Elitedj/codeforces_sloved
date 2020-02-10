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
const double eps = 1e-9;
using namespace std;
 
 
int a[150];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = 0;
		int sum = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				a[i] = 1;
				ans++;
			}
			sum += a[i];
		}
		if(sum == 0)ans++;
		cout<<ans<<"\n";
	}
	return 0;
}

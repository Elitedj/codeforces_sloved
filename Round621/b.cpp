#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		int ans = inf;
		for(int i=1;i<=n;i++)
		{
			int a;
			cin>>a;
			if(a>x)
				ans = min(ans, 2);
			else
				ans = min(ans, (x+a-1)/a);
		}
		cout<<ans<<"\n";
	}
}

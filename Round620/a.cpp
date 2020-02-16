#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 4e5+5;
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
		int x, y, a, b;
		cin>>x>>y>>a>>b;
		if((y-x)%(a+b)==0)
		{
			int ans = (y-x)/(a+b);
			cout<<ans<<"\n";
		}
		else
			cout<<"-1\n";
	}
	return 0;
}

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
		int x, a, b;
		cin>>x>>a>>b;
		int ok = false;
		for(int i=0;i<=a;++i)
		{
			int t = x;
			for(int j=0;j<i;++j)
				t = t/2+10;
			for(int j=1;j<=b;++j)
				t -= 10;
			if(t<=0)
			{
				ok = true;
				break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

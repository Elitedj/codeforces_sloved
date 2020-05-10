#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n0, n1, n2;
		cin>>n0>>n1>>n2;
		string ans = "";
		if(n2)
		{
			for(int i=1;i<=n2+(n1==0);i++)
				ans += '1';
		}
		if(n1)
		{
			for(int i=1;i<=n1;i+=2)
				ans += "10";
		}
		if(n0)
		{
			for(int i=1;i<=n0+(n1==0);i++)
				ans += '0';
		}
		if(n1 && n1%2==0)
			ans += '1';
		cout<<ans<<"\n";
	}
	return 0;
}

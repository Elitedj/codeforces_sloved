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
const double PI = acos(-1);
using namespace std;
 
 
int a[500];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		int flag = 0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			{
				flag = 1;
				cout<<"1\n"<<i<<"\n";
				break;
			}
		}
		if(!flag)
		{
			if(n==1)cout<<"-1\n";
			else cout<<"2\n1 2\n";
		}
	}
	return 0;
}

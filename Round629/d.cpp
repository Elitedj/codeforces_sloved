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
		for(int i=1;i<=n;i++)cin>>a[i];
		int f = 1;
		for(int i=1;i+1<=n;i++)
			if(a[i]!=a[i+1])
			{
				f = 0;
				break;
			}
		if(a[1]!=a[n])f=0;
		if(f)
		{
			cout<<"1\n";
			for(int i=1;i<=n;i++)cout<<"1 ";
			cout<<"\n";
			continue;
		}
		if(n%2==0)
		{
			cout<<"2\n";
			for(int i=1;i<=n;i++)
				if(i&1)cout<<"1 ";
				else cout<<"2 ";
			cout<<"\n";
			continue;
		}
		for(int i=1;i+1<=n;i++)
			if(a[i]==a[i+1])
			{
				f=1;
				break;
			}
		if(a[1]==a[n])f=1;
		if(f)
		{
			cout<<"2\n1 ";
			int res = 2;
			for(int i=2;i<=n;i++)
			{
				if(f && a[i]==a[i-1])
				{
					cout<<3-res<<" ";
					f=0;
					continue;
				}
				if(i==n && f)
				{
					cout<<"1 ";break;
				}
				cout<<res<<" ";
				res = 3-res;
			}
			cout<<"\n";
		}
		else
		{
			cout<<"3\n";
			for(int i=1;i<n;i++)
				if(i&1)cout<<"1 ";
				else cout<<"2 ";
			cout<<"3\n";
		}
	}
	return 0;
}

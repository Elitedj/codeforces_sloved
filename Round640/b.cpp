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
		int n, k;
		cin>>n>>k;
		if(n<k)
		{
			cout<<"NO\n";
			continue;
		}
		else if(n==k)
		{
			cout<<"YES\n";
			for(int i=1;i<=n;i++)
				cout<<"1 ";
			cout<<"\n";
		}
		else if(n%2==1 && k%2==0)
		{
			cout<<"NO\n";
			continue;
		}
		else
		{
			if((n-k+1)%2==1)
			{
				cout<<"YES\n";
				for(int i=1;i<=k-1;i++)
					cout<<"1 ";
				cout<<n-k+1<<"\n";
			}
			else if(n-(k-1)*2>0 && (n-(k-1)*2)%2==0)
			{
				cout<<"YES\n";
				for(int i=1;i<=k-1;i++)
					cout<<"2 ";
				cout<<n-(k-1)*2<<"\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
	}
	return 0;
}

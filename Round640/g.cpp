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
		int n;
		cin>>n;
		if(n<4)
		{
			cout<<"-1\n"; continue;
		}
		if(n%2==1)
		{
			for(int i=n;i>=1;i-=2) cout<<i<<" ";
			cout<<"4 2 ";
			for(int i=6;i<=n;i+=2) cout<<i<<" ";
			cout<<"\n";
		}
		else
		{
			for(int i=n-1;i>=1;i-=2) cout<<i<<" ";
			cout<<"4 2 ";
			for(int i=6;i<=n;i+=2) cout<<i<<" ";
			cout<<"\n";
		}
	}
	return 0;
}

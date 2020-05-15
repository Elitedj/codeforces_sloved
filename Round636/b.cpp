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
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(((n>>1)-1) % 2 != 1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		ll sum = 0;
		for(int i=1, j=2;i<=(n>>1);++i, j+=2)
		{
			sum += j;
			cout<<j<<" ";
		}
		for(int i=1, j=1;i<=(n>>1)-1;++i, j+=2)
		{
			sum -= j;
			cout<<j<<" ";
		}
		cout<<sum<<"\n";
	}
	return 0;
}

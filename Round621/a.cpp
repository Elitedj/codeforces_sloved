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
 
 
int a[150];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, d;
		cin>>n>>d;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=2;i<=n;i++)
		{
			if(d<(i-1))break;
			int tmp = min(d/(i-1), a[i]);
			a[1] += tmp;
			d -= tmp*(i-1);
		}
		cout<<a[1]<<"\n";
	}
	return 0;
}

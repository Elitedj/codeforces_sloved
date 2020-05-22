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
		ll n, k;
		cin>>n>>k;
		int add = inf;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i == 0)
			{
				add = i;
				break;
			}
		}
		if(add == inf) add = n;
		n += add;
		n += 2*(k-1);
		cout<<n<<"\n";
	}
	return 0;
}

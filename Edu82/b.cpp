#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n, g, b;
		cin>>n>>g>>b;
		ll tmp = n;
		n = (n+1)/2;
		if(n%g==0)
			cout<<max(tmp, g+(n/g-1)*(g+b))<<"\n";
		else
			cout<<max(tmp, (n/g)*(g+b)+n%g)<<"\n";
	}
	return 0;
}

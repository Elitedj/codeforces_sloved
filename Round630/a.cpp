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
	int t;
	cin>>t;
	while(t--)
	{
		ll a, b, c, d;
		cin>>a>>b>>c>>d;
		ll x, x1, x2, y, y1, y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		if(x1<=x-a+b && x-a+b<=x2 && y1<=y-c+d && y-c+d<=y2 && ((x1<x2)||(a+b==0)) && ((y1<y2)||(c+d==0)))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

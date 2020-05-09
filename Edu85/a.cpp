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
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a=0, b=0, f=1;
		while(n--)
		{
			int x, y;
			cin>>x>>y;
			if(x<a || y<b || y-b>x-a)
				f = 0;
			a = x, b = y;
		}
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

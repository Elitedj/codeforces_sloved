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
	while (t--)
	{
		int a, b;
		cin>>a>>b;
		int ans = 0;
		if (b>a) swap(a, b);
		int tmp = min(a/2, min(a-b, b));
		ans += tmp;
		a -= 2*tmp;
		b -= tmp;
		ans += 2*(b/3);
		a -= b/3*3;
		b -= b/3*3;
		if(a>=2 && b>=1)
		{
			a -= 2;
			b -= 1;
			ans++;
		}
		if(a>=1 && b>=2)
		{
			a -= 1;
			b -= 2;
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

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
const int maxn = 1e6+5;
 
 
int a[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1, a+n+1);
		int ans = 1;
		for(int i=1;i<=n;)
		{
			int j=i;
			while(j<=n)
			{
				if(ans + (j-i) >= a[j]) break;
				j++;
			}
			if(j<=n) ans += j-i+1;
			i = j+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

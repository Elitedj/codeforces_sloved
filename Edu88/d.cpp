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
const int maxn = 1e5+5;
 
 
int a[maxn], b[maxn];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans = 0;
	for(int i=1;i<=30;i++)
	{
		int sum = 0, maxans = -1*inf;
		for(int j=1;j<=n;j++)
		{
			if(a[j] > i) b[j] = -1*inf;
			else b[j] = a[j];
		}
		for(int j=1;j<=n;j++)
		{
			int tmp = max(0, sum) + b[j];
			maxans = max(maxans, tmp);
			sum = tmp;
		}
		ans = max(ans, maxans-i);
	}
	cout<<ans<<"\n";
	return 0;
}

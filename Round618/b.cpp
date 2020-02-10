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
 
 
int a[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		n*=2;
		for(int i=1;i<=n;i++)
			scanf("%d", &a[i]);
		sort(a+1, a+n+1);
		printf("%d\n", a[n/2+1]-a[n/2]);
	}
	return 0;
}

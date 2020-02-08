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
using namespace std;
 
 
int main()
{
	int k, p, x;
	scanf("%d%d%d", &k, &p, &x);
	double ans = x+1.0*k*p;
	for(int i=2;;i++)
	{
		double d = k*1.0/(i*1.0);
		double tmp = i*1.0*x+d*p;
		if(tmp < ans)
			ans = tmp;
		else
			break;
	}
	printf("%.3f\n", ans);
}

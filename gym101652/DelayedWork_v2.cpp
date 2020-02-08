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
	cin>>k>>p>>x;
	int m = sqrt((k*p)*1.0/(x*1.0));
	int m1 = max(m, 1);
	int m2 = max(m+1, 1);
	int m3 = max(m-1, 1);
	double d1 = k*1.0/(m1*1.0);
	double d2 = k*1.0/(m2*1.0);
	double d3 = k*1.0/(m3*1.0);
	double ans = min(m1*x+d1*p, min(m2*x+d2*p, m3*x+d3*p));
	printf("%.3f\n", ans);
	return 0;
}

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
 
 
int n;
double X, V;
double l[105], r[105], v[105];
int main()
{
	double sum = 0;
	scanf("%d%lf%lf", &n, &X, &V);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf", &l[i], &r[i], &v[i]);
		sum += (r[i]-l[i])*v[i];
	}
	double Vy = abs(sum / X);
	if(Vy >= V)
	{
		printf("Too hard\n");
	}
	else
	{
		double Vx = sqrt(V*V - Vy*Vy);
		if(Vx*2.0 <= V+eps)
		{
			printf("Too hard\n");
		}
		else
		{
			printf("%.3f\n", X/Vx);
		}
	}
	return 0;
}

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
 
 
double a[10];
int main()
{
	double sum = 0;
	double maxv = 0;
	for(int i=1;i<=6;i++)
	{
		cin>>a[i];
		sum += i*a[i];
		maxv = max(maxv, a[i]);
	}
	if(abs(sum-3.5)<=0.01)
		printf("0.000\n");
	else
		printf("%.3f\n", abs(3.5-sum)/maxv);
	return 0;
}

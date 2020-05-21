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
	while(t--)
	{
		int n;
		cin>>n;
		int sum1 = 0, sum2 = 0;
		int cnt = 1;
		for(int i=1;i<n/2;++i)
		{
			cnt<<=1;
			sum1 += cnt;
		}
		for(int i=1;i<=n/2;++i)
		{
			cnt<<=1;
			sum2 += cnt;
		}
		cnt<<=1;
		sum1 += cnt;
		cout<<abs(sum1 - sum2)<<"\n";
	}
	return 0;
}

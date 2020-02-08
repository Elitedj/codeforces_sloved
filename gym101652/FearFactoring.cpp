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
 

// 除法分块
ull cal(ull n)
{
	ull ans = 0;
	for(ull l=1, r; l<=n; l=r+1)
	{
		// 区间[l, r]
		r = n/(n/l);
		// 贡献为n/l
		// 等差数列求和:(l+r)*(r-l+1)/2
		// 首项加末项乘于区间长度除以2
		ans += (n/l) * (l+r)*(r-l+1)/2;
	}
	return ans;
}
int main()
{
	IO;
	ull a, b;
	cin>>a>>b;
	cout<<cal(b) - cal(a-1)<<"\n";
	return 0;
}

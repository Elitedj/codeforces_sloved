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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		vector<int> factor;
		for(int i=1;i*i<=n;i++)
			if(n%i==0)
			{
				factor.push_back(i);
				factor.push_back(n/i);
			}
		int ans = inf;
		for(auto v:factor)
			if(v>k) continue;
			else ans = min(ans, n/v);
		cout<<ans<<"\n";
	}
	return 0;
}

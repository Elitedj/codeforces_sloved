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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		s = '-' + s;
		vector<int> sum0(n+1, 0), sum1(n+1, 0);
		for(int i=1;i<=n;i++)
		{
			sum0[i] += sum0[i-1] + (s[i]=='0');
			sum1[i] += sum1[i-1] + (s[i]=='1');
		}
		int ans = inf;
		for(int i=1;i<=n;i++)
		{
			ans = min(ans, sum0[i]+sum1[n]-sum1[i]);
			ans = min(ans, sum1[i]+sum0[n]-sum0[i]);
		}
		ans = min(ans, min(sum0[n], sum1[n]));
		cout<<ans<<"\n";
	}
	return 0;
}

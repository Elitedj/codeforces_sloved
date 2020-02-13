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
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans = 0;
		int len = s.length();
		int f = 0, cnt=0;
		for(int i=0;i<len;i++)
		{
			if(f==0 && s[i]=='1')
			{
				f=1;
			}
			if(f && s[i]=='0')
				cnt++;
			if(s[i]=='1')
			{
				ans += cnt;
				cnt = 0;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

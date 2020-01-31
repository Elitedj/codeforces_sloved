#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		string s;
		cin>>s;
		int tot = 0;
		for(int i=0;i<n;i++)
			if(s[i]=='0')tot++;
			else tot--;
		int ans = 0, pref = 0;
		for(int i=0;i<n;i++)
		{
			int tmp = x-pref;
			if(tot==0)
			{
				if(tmp==0)
				{
					ans=-1;break;
				}
			}
			else
			{
				int t = tmp/tot;
				if(t>=0 && t*tot==tmp)ans++;
			}
			if(s[i]=='0')pref++;
			else pref--;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

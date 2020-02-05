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
	int n;
	string s;
	cin>>n>>s;
	string ans="0";
	char pre = s[0];
	char aft = '-1';
	for(int i=1;i<n;i++)
	{
		if(s[i]>=pre)
		{
			ans+='0';
			pre = s[i];
		}
		else
		{
			ans+='1';
			if(aft!='-1')
			{
				if(aft>s[i])
				{
					cout<<"NO\n";
					return 0;
				}
			}
			aft=s[i];
		}
	}
	cout<<"YES\n"<<ans<<"\n";
	return 0;
}

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
 
 
string s[15];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		int ok = 0;
		for(int i=1;i<=n;i++) cin>>s[i];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<26;j++)
			{
				string ans = s[1];
				ans[i] = (char)(j+'a');
				int f = 1;
				for(int i=1;i<=n;i++)
				{
					int cnt = 0;
					for(int j=0;j<m;j++)
						if(ans[j] != s[i][j]) cnt++;
					if(cnt > 1)
					{
						f = 0; break;
					}
				}
				if(f)
				{
					ok = 1;
					cout<<ans<<"\n";
					i=inf;
					break;
				}
			}
		}
		if(!ok) cout<<"-1\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
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
		int n = s.length();
		int last = 0;
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='R')
			{
				ans = max(ans, i+1-last);
				last = i+1;
			}
		}
		ans = max(ans, n+1-last);
		cout<<ans<<"\n";
	}
	return 0;
}

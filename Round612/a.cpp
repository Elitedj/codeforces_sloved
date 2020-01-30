#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans = 0;
		int cnt = 0;
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='A')
				ans = max(ans, cnt), cnt=0;
			else cnt++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

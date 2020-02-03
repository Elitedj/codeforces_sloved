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
		int n;
		string s;
		cin>>n;
		cin>>s;
		int cnt = 0;
		vector<int> ans;
		for(int i=0;i<s.length();i++)
		{
			int tmp = s[i]-'0';
			if(tmp%2==1)
			{
				cnt++;
				ans.push_back(tmp);
			}
		}
		if(cnt<2)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<ans[0]<<ans[1]<<"\n";
		}
	}
	return 0;
}

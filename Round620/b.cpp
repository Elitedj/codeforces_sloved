#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 4e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
string a[200];
set<string> s;
map<string, int> mp;
int main()
{
	IO;
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
		mp[a[i]]++;
	}
	string ans = "";
	for(int i=1;i<=n;i++)
	{
		string tmp = a[i];
		reverse(tmp.begin(), tmp.end());
		if(a[i]==tmp)continue;
		if(s.count(tmp))
		{
			if(mp[a[i]]!=0 && mp[tmp]!=0)
			{
				ans = a[i] + ans;
				ans += tmp;
				mp[a[i]]--;
				mp[tmp]--;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		string tmp = a[i];
		reverse(tmp.begin(), tmp.end());
		if(a[i]==tmp)
		{
			if(mp[a[i]]!=0)
			{
				string ss = "";
				int len = ans.length()/2;
				for(int i=0;i<len;i++)
					ss += ans[i];
				ss += a[i];
				for(int i=len;i<ans.length();i++)
					ss += ans[i];
				ans = ss;
				break;
			}
		}
	}
	cout<<ans.length()<<"\n";
	cout<<ans<<"\n";
	return 0;
}

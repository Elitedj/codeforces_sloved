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
		string ans = "";
		ans += s[0];
		set<int> se;
		se.insert(s[0]);
		int id = 0;
		int f = 1;
		for(int i=1;i<s.length();i++)
		{
			if(!se.count(s[i]))
			{
				if(id!=0 && id!=ans.length()-1)
				{
					//cout<<ans<<endl;
					//cout<<id<<endl;
					//cout<<"111-->"<<i<<endl;
					f=0;break;
				}
				else if(id==0)
				{
					ans = s[i] + ans;
				}
				else
				{
					ans += s[i];
					id++;
				}
				se.insert(s[i]);
			}
			else
			{
				if(id==0)
				{
					if(ans[1]!=s[i])
					{
						//cout<<"222--->"<<i<<endl;
						f=0;break;
					}
					else
						id=1;
				}
				else if(id==ans.length()-1)
				{
					if(ans[id-1]!=s[i])
					{
						//cout<<"333--->"<<i<<endl;
						f=0;break;
					}
					else id--;
				}
				else
				{
					if(ans[id-1]==s[i])
					{
						id--;
					}
					else if(ans[id+1]==s[i])
						id++;
					else
					{
						f=0;break;
					}
				}
			}
		}
		if(!f)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<ans;
			for(int i=0;i<26;i++)
				if(!se.count('a'+i))
					cout<<(char)('a'+i);
			cout<<"\n";
		}
	}
	return 0;
}

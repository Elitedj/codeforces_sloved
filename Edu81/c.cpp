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
 
 
vector<vector<int> > v(26);
void sloved()
{
	string s, t;
	cin>>s>>t;
	for(int i=0;i<26;i++)
		v[i].clear();
	for(int i=0;i<s.length();i++)
	{
		v[s[i]-'a'].push_back(i);
	}
	int ans=0, ind=0;
	for(int i=0;i<t.length();i++)
	{
		int tmp = t[i]-'a';
		if(v[tmp].empty())
		{
			cout<<"-1\n";return;
		}
		auto pos = lower_bound(v[tmp].begin(), v[tmp].end(), ind);
		if(pos == v[tmp].end())
		{
			ans++;
			ind=0;
			pos = lower_bound(v[tmp].begin(), v[tmp].end(), ind);
		}
		ind = *pos+1;
	}
	cout<<ans+(ind>0)<<"\n";
}
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
		sloved();
	return 0;
}

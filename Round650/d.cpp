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
const int maxn = 1e5+5;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n, m;
		n = s.length();
		cin>>m;
		vector<int> b(m);
		for(int i=0;i<m;i++) cin>>b[i];
		string ans(m, '?');
		vector<int> cnt(26, 0);
		for(int i=0;i<n;i++) cnt[s[i]-'a']++;
		int cur = 25;
		while(1)
		{
			vector<int> tmp;
			for(int i=0;i<m;i++)
				if(b[i]==0 && ans[i]=='?') tmp.push_back(i);
			int sz = tmp.size();
			if(sz == 0) break;
			while(cur>=0 && cnt[cur]<sz) cur--;
			if(cur<0) break;
			for(int i=0;i<sz;i++) ans[tmp[i]] = 'a'+cur;
			for(int i=0;i<m;i++)
				for(int j=0;j<sz;j++)
					b[i] -= abs(i-tmp[j]);
			cur--;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

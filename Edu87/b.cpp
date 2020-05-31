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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans = inf;
		int n = s.length();
		vector<int> cnt(3, 0);
		for(int l=0, r=0; r<n; r++)
		{
			cnt[s[r]-'1'] ++;
			while(cnt[s[l]-'1'] > 1)
				cnt[s[l++]-'1']--;
			if(cnt[0] && cnt[1] && cnt[2]) ans = min(ans, r-l+1);
		}
		if(ans == inf) ans = 0;
		cout<<ans<<"\n";
	}
	return 0;
}

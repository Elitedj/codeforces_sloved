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
 
 
vector<int> ans;
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		ans.clear();
		int n;
		string s;
		cin>>n>>s;
		for(int i=n;i>=1;i--)
			ans.push_back(i);
		int len = n-1;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='>')continue;
			int j = i+1;
			while(s[j]=='<' && j<len)
				j++;
			reverse(ans.begin()+i, ans.begin()+j+1);
			i=j;
		}
		for(int i=0;i<n;i++)
			printf("%d ", ans[i]);
		printf("\n");
 
 
		ans.clear();
		for(int i=1;i<=n;i++)
			ans.push_back(i);
		for(int i=0;i<len;i++)
		{
			if(s[i]=='<')continue;
			int j=i+1;
			while(j<len && s[j]=='>')
				j++;
			reverse(ans.begin()+i, ans.begin()+j+1);
			i=j;
		}
		for(int i=0;i<n;i++)
			printf("%d ", ans[i]);
		printf("\n");
	}
	return 0;
}

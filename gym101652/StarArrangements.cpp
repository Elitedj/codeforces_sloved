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
using namespace std;
 
 
vector<P> ans;
int main()
{
	int s;
	cin>>s;
	int len = s/2 + (s%2==1);
	for(int i=2;i<=len;i++)
	{
		for(int j=i-1;j<=i;j++)
		{
			int sum = i+j, tmp=s;
			tmp%=sum;
			if(tmp==0 || tmp==i)
				ans.push_back(P(i, j));
		}
	}
	cout<<s<<":\n";
	for(auto v:ans)
		cout<<v.first<<","<<v.second<<"\n";
	return 0;
}

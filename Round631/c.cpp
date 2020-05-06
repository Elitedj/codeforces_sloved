#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
int l[maxn];
int ans[maxn];
int main()
{
	IO;
	int n, m;
	cin>>n>>m;
	ll sum = 0;
	int flag = 1;
	for(int i=1;i<=m;++i)
	{
		cin>>l[i];
		sum += l[i];
		if(l[i]+i-1 > n) flag=0;
		ans[i] = i;
	}
	if(flag && sum>=n)
	{
		int pos = n;
		for(int i=m;i;--i)
		{
			if(pos-l[i]+1 <= i) break;
			ans[i] = pos-l[i]+1;
			pos -= l[i];
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
	else
		cout<<"-1\n";
	return 0;
}

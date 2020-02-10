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
 
 
int a[maxn];
int f[50];
vector<int> v[50];
map<int, int> mp;
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		int tmp = a[i];
		int cnt = 0;
		while(tmp)
		{
			cnt++;
			if(tmp&1)
			{
				f[cnt]++;
				v[cnt].push_back(a[i]);
			}
			tmp/=2;
		}
	}
	int ind=-1;
	for(int i=40;i>=1;i--)
	{
		if(f[i]==1)
		{
			ind = i;break;
		}
	}
	if(ind==-1)
	{
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	else
	{
		mp[v[ind][0]]--;
		cout<<v[ind][0];
		for(auto val:mp)
		{
			int len = val.second;
			for(int i=1;i<=len;i++)
				cout<<" "<<val.first;
		}
		cout<<"\n";
	}
	return 0;
}

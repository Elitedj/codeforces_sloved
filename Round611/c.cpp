#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int a[maxn];
int f[maxn];
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[a[i]] = 1;
	}
	vector<int> nuse, zeros;
	for(int i=1;i<=n;i++)
	{
		if(f[i]==0)nuse.push_back(i);
		if(a[i]==0)zeros.push_back(i);
	}
	while(true)
	{
		random_shuffle(nuse.begin(), nuse.end());
		bool ok = true;
		int len = nuse.size();
		for(int i=0;i<len;i++)
			if(nuse[i]==zeros[i])
			{
				ok = false; break;
			}
		if(ok)
		{
			for(int i=0;i<len;i++)
				a[zeros[i]] = nuse[i];
			for(int i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
			break;
		}
	}
	return 0;
}

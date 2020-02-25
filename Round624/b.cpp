/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年02月25日
* Last Modified : 2020年02月25日 星期二 15时02分47秒
* Created By : Elitedj
************************************************************************/

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
using namespace std;
 
 
int a[200], f[200];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		memset(f, 0, sizeof(f));
		int n, m;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=m;i++)
		{
			int x;
			cin>>x;
			f[x] = 1;
		}
		for(int i=1;i<=n;)
		{
			int l;
			int j=i;
			while(j<=n)
			{
				if(f[j])
					break;
				j++;
			}
			if(j>n)break;
			l=j;
			int r;
			while(j+1<=n && f[j+1])j++;
			r=j;
			//cout<<l<<" --- "<<r<<endl;
			sort(a+l, a+2+r);
			i=r+2;
		}
		int flag = 1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				flag = 0;break;
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

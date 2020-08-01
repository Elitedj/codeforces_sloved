/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年08月01日
* Last Modified : 2020年08月01日 星期六 15时18分45秒
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
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e5+5;


int a[maxn];
int f[maxn];
int ans[maxn];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) f[a[i]] = 1;
	f[0] = 1;
	int la = 0;
	int idx = 0;
	for(int i=1;i<=n;i++)
	{
		if(a[i] > la)
			ans[i] = la;
		else
		{
			while(idx<=n && f[idx]) ++idx;
			ans[i] = idx++;
		}
		la = a[i];
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}

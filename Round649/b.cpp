/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年08月01日
* Last Modified : 2020年08月01日 星期六 15时18分28秒
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


int n;
int a[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		vector<int> ans;
		ans.push_back(a[1]);
		for(int i=2;i<n;i++)
		{
			if(a[i]>ans[ans.size()-1] && a[i+1]>a[i])continue;
			if(a[i]<ans[ans.size()-1] && a[i+1]<a[i])continue;
			ans.push_back(a[i]);
		}
		ans.push_back(a[n]);;
		cout<<ans.size()<<"\n";
		for(auto v:ans) cout<<v<<" ";
		cout<<"\n";
	}
	return 0;
}

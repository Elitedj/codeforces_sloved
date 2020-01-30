#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
int a[maxn], use[maxn];
int n;
 
int getMin()
{
	for(int i=0;i<maxn;i++)use[i]=0;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		int x = a[i];
		if(use[x-1] || use[x] || use[x+1])continue;
		ans++;
		use[x+1] = 1;
	}
	return ans;
}
 
int getMax()
{
	for(int i=0;i<maxn;i++)use[i]=0;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		int x = a[i];
		if(use[x-1] && use[x] && use[x+1])continue;
		ans++;
		if(!use[x-1]) use[x-1]=1;
		else if(!use[x]) use[x]=1;
		else use[x+1]=1;
	}
	return ans;
}
 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a, a+n);
	cout<<getMin()<<" "<<getMax()<<"\n";
	return 0;
}

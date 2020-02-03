#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 3e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int a[maxn];
int n;
int fun1()
{
	int be=-1, f=1;
	for(int i=1;i<=n;i++)
	{
		be+=f;
		if(be<0)return 0;
		if(be>a[i])
		{
			if(a[i-1]==a[i])be=a[i-1]-1;
			else be=a[i];
			f=-1;
		}
		else if(be<a[i])continue;
		else if(be==a[i] && a[i+1]<=a[i])f=-1;
	}
	if(be<0)return 0;
	return 1;
}
int fun2()
{
	int be=-1, f=1;
	for(int i=n;i>=1;i--)
	{
		be+=f;
		if(be<0)return 0;
		if(be>a[i])
		{
			if(a[i]==a[i+1])be=a[i]-1;
			else be=a[i];
			f=-1;
		}
		else if(be<a[i])continue;
		else if(be==a[i] && a[i-1]<=a[i])f=-1;
	}
	if(be<0)return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)scanf("%d", &a[i]);
		if(fun1() || fun2())
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

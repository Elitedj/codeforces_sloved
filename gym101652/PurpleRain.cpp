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
 
string s;
int main()
{
	IO;
	cin>>s;
	int len = s.length();
	int ans1=0, ans2=0;
	int x1=0, x2=0, l1, r1, l2, r2;
	int sum1=0, sum2=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='R')
		{
			sum1++;
			if(sum1>ans1)
			{
				ans1 = sum1;
				l1 = x1;
				r1 = i;
			}
		}
		else
		{
			sum1--;
			if(sum1<0)
			{
				sum1 = 0;
				x1 = i+1;
			}
		}
	}
 
	for(int i=0;i<len;i++)
	{
		if(s[i]=='B')
		{
			sum2++;
			if(sum2>ans2)
			{
				ans2 = sum2;
				l2 = x2;
				r2 = i;
			}
		}
		else
		{
			sum2--;
			if(sum2<0)
			{
				sum2=0;
				x2 = i+1;
			}
		}
	}
 
	if(ans1 == ans2)
	{
		if(l1 < l2)
			printf("%d %d\n", l1+1, r1+1);
		else if(l1 > l2)
			printf("%d %d\n", l2+1, r2+1);
		else
		{
			if(r1 < r2)
				printf("%d %d\n", l1+1, r1+1);
			else
				printf("%d %d\n", l2+1, r2+1);
		}
	}
	else if(ans1 > ans2)
		printf("%d %d\n", l1+1, r1+1);
	else
		printf("%d %d\n", l2+1, r2+1);
	return 0;
}

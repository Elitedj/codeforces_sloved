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
 
 
int main()
{
	int n;
	cin>>n;
	for(int i=n+1;;i++)
	{
		int f = 1;
		int t = i;
		while(t)
		{
			if(t%10==0)
			{
				f=0;break;
			}
			t/=10;
		}
		if(f)
		{
			cout<<i<<"\n";break;
		}
	}
	return 0;
}

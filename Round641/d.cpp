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
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int f = 0;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
			if(a[i] == k) f=1;
		}
		if(!f)
		{
			cout<<"no\n"; continue;
		}
		if(n == 1)
		{
			cout<<"yes\n"; continue;
		}
		int small=0, big=0;
		f = 0;
		for(int i=1;i<=n;++i)
		{
			if(a[i] >= k)
			{
				big++;
				if(big>small && (small!=0 || big>=2))
				{
					f = 1; break;
				}
				else
				{
					big = 1; small = 0;
				}
			}
			else
				small++;
		}
		if(f) cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}

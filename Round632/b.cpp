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
const double PI = acos(-1);
using namespace std;
 
 
int a[maxn], b[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		set<int> s;
		int f = 1;
		for(int i=1;i<=n;i++)
		{
			if(a[i] == b[i])
			{
				s.insert(a[i]);
				continue;
			}
			else if(b[i] > a[i])
			{
				if(!s.count(1))
				{
					f = 0; break;
				}
				s.insert(a[i]);
			}
			else
			{
				if(!s.count(-1))
				{
					f = 0; break;
				}
				s.insert(a[i]);
			}
		}
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		set<int> s;
		for(int i=1;i<=n;i++)
		{
			int v;
			cin>>v;
			s.insert(v);
		}
		int ans = 0;
		while(x--)
		{
			++ans;
			if(s.count(ans))
				++x;
		}
		while(1)
		{
			if(s.count(ans+1))
				++ans;
			else
				break;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

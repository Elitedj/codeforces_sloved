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
const int maxn = 2e5+5;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, m;
		cin>>n>>x>>m;
		int l=-1, r=-1;
		while(m--)
		{
			int ll, rr;
			cin>>ll>>rr;
			if(l==-1 && r==-1)
			{
				if(ll<=x && x<=rr)
					l=ll, r=rr;
			}
			else
			{
				if(l>rr || ll>r)continue;
				l = min(l, ll);
				r = max(r, rr);
			}
		}
		if(l==-1 && r==-1) cout<<"1\n";
		else cout<<r-l+1<<"\n";
	}
	return 0;
}

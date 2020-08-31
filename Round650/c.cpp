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
		int n, k;
		cin>>n>>k;
		string a;
		cin>>a;
		set<int> pos;
		for(int i=0;i<n;i++)
			if(a[i]=='1') pos.insert(i);
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='0')
			{
				auto it = pos.lower_bound(i-k);
				if(it==pos.end() || *it>i+k)
				{
					a[i] = '1';
					ans++;
					pos.insert(i);
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

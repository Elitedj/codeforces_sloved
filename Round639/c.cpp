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
 
 
int a[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		map<int, int> mp;
		int f = 1;
		for(int i=0;i<n;i++)
		{
			int tmp = (i+a[i])%n;
			if(tmp<0) tmp += n;
			if(mp[tmp])
			{
				f = 0; break;
			}
			mp[tmp] = 1;
		}
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

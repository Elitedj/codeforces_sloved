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
		int n;
		int flag = 0;
		map<int, int> mp;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(mp[x] && mp[x]+1 != i)flag=1;
			else if(!mp[x]) mp[x] = i;
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

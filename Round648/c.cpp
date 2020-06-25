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
 
 
int n;
int a[maxn], b[maxn], pos[maxn];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		pos[b[i]] = i;
	}
	map<int, int> mp;
	for(int i=1;i<=n;i++)
	{
		int j = pos[a[i]];
		mp[(j-i+n)%n]++;
	}
	int ans = 0;
	for(auto p:mp) ans = max(ans, p.second);
	cout<<ans<<"\n";
	return 0;
}

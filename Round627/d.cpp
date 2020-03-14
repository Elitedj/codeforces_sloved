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
vector<int> v;
map<int, int> mp;
int bit[maxn*3];
int lowbit(int x)
{
	return x&(-x);
}
void add(int i, int x)
{
	while(i<=maxn*2+100)
	{
		bit[i] += x;
		i += lowbit(i);
	}
}
int sum(int i)
{
	int ans = 0;
	while(i>0)
	{
		ans += bit[i];
		i -= lowbit(i);
	}
	return ans;
}
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		v.push_back(a[i]-b[i]);
		v.push_back(b[i]-a[i]);
	}
	sort(v.begin(), v.end());
	int m = unique(v.begin(), v.end()) - v.begin();
	for(int i=0;i<m;i++) mp[v[i]] = i;
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans += sum(mp[a[i]-b[i]]);
		add(mp[b[i]-a[i]]+1, 1);
	}
	cout<<ans<<"\n";
	return 0;
}

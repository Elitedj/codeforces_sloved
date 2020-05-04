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
 
 
int a[maxn];
ll m = 998244353;
vector<int> v;
int main()
{
	IO;
	int n, k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int i;
	for(i=1;i<=n;i++)
	{
		if(a[i]>n-k)break;
	}
	for(;i<=n;)
	{
		int j = i+1;
		while(j<=n && a[j]<=n-k)j++;
		if(j>n) break;
		v.push_back(j-i);
		i = j;
	}
	ll sum = 0;
	ll ans = 1;
	for(int i=n;i>n-k;i--)
		sum += i;
	for(auto val:v)
		ans = (ans*(1ll*val))%m;
	cout<<sum<<" "<<ans<<"\n";
	return 0;
}

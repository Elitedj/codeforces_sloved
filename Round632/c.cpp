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
 
 
map<ll, int> mp;
ll ans, sum;
int n, x;
int main()
{
	IO;
	cin>>n;
	mp[0] = 0;
	int t = -1;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		sum += x;
		if(mp.count(sum))
			t = max(t, mp[sum]);
		ans += i-t-1;
		mp[sum] = i;
	}
	cout<<ans<<"\n";
	return 0;
}

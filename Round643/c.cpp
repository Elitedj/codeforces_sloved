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
const int maxn = 1e6+5;
 
ll cnt[maxn];
int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	for(int i=a; i<=b; ++i)
	{
		cnt[i+b]++;
		cnt[i+c+1]--;
	}
	for(int i=1; i<maxn; ++i)
		cnt[i] += cnt[i-1];
	for(int i=1; i<maxn; ++i)
		cnt[i] += cnt[i-1];
	ll ans = 0;
	for(int i=c; i<=d; ++i)
		ans += cnt[maxn-1] - cnt[i];
	cout<<ans<<"\n";
	return 0;
}

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
 
 
int m[maxn], c[maxn], ar[maxn];
vector<int> v[maxn];
int main()
{
	IO;
	int n, k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
		ar[m[i]]++;
	}
	for(int i=1;i<=k;i++)
		cin>>c[i];
	int ans = 0;
	for(int i=k;i;i--)
	{
		ar[i] += ar[i+1];
		ans = max(ans, (ar[i]+c[i]-1)/c[i]);
	}
	sort(m+1, m+n+1);
	for(int i=1;i<=n;i++)
		v[i%ans].push_back(m[i]);
	cout<<ans<<"\n";
	for(int i=0;i<ans;i++)
	{
		cout<<v[i].size();
		for(auto val:v[i])
			cout<<" "<<val;
		cout<<"\n";
	}
	return 0;
}

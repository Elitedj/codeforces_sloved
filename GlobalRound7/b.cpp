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
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>b[i];
	int maxx = 0;
	for(int i=1;i<=n;i++)
	{
		a[i] = maxx + b[i];
		maxx = max(maxx, a[i]);
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}

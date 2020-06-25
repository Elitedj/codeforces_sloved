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
int a[505], b[505];
bool check()
{
	int ones=0, zeros=0, f=1;
	for(int i=1;i<=n;i++)
	{
		if(b[i]) ones++;
		else zeros++;
		if(a[i] < a[i-1]) f = 0;
	}
	return (f || (ones && zeros));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		if(check()) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
